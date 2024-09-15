//
// Created by Ciro Garcia belmonte on 3/20/23.
//

#include <fstream>
#include "BitcoinExchange.hpp"
#include <algorithm>
#include <iomanip>
#include <iostream>

#define JANUARY 1
#define FEBRUARY 2
#define MARCH 3
#define APRIL 4
#define MAY 5
#define JUNE 6
#define JULY 7
#define AUGUST 8
#define SEPTEMBER 9
#define OCTOBER 10
#define NOVEMBER 11
#define DECEMBER 12


BitcoinExchange::BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(const std::string &database_csv) {
	std::ifstream file((database_csv.data()));
	std::string line;
	int i = 0;

	while (std::getline(file, line)) {

		// Verify line format
		if (line.find(',') == std::string::npos)
			throw std::invalid_argument("Invalid line format");
		std::string date = line.substr(0, line.find(','));
		std::string valueStr = line.substr(line.find(',') + 1);
		if (date == "date" && valueStr == "exchange_rate" && i == 0) {
			i++;
			continue;
		}
		float value;
		try {
			value = stringto<float>(valueStr);
		} catch (std::invalid_argument &e) {
			throw std::invalid_argument("Invalid value (" + valueStr + ")");
		}
		addValue(date, value);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this == &other)
		return *this;
	valueHistory = other.valueHistory;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {

}

void BitcoinExchange::addValue(std::string date, float value) {

	// Verify date format
	if (date.length() != 10 || (date[4] != '-' || date[7] != '-'))
		throw std::invalid_argument("Invalid date format");

	// Verify date is valid
	int year = stringto<int>(date.substr(0, 4));
	int month = stringto<int>(date.substr(5, 2));
	int day = stringto<int>(date.substr(8, 2));

	verifyDate(year, month, day);

	valueHistory[date] = value;
}

void BitcoinExchange::verifyDate(int year, int month, int day) {

	std::string months[13] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	switch (month) {
		case JANUARY:
		case MARCH:
		case MAY:
		case JULY:
		case AUGUST:
		case OCTOBER:
		case DECEMBER:
			if (day < 1 || day > 31)
				throw std::invalid_argument("Invalid day (" + months[month] + " " + to_string(month) + ")");
			break;
		case APRIL:
		case JUNE:
		case SEPTEMBER:
		case NOVEMBER:
			if (day < 1 || day > 30)
				throw std::invalid_argument("Invalid day (" + months[month] + " " + to_string(day) + ")");
			break;
		case FEBRUARY:
			if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
				if (day < 1 || day > 29)
					throw std::invalid_argument("Invalid day (February " + to_string(day) + ", leap year)");
			} else {
				if (day < 1 || day > 28)
					throw std::invalid_argument("Invalid day (February " + to_string(day) + ", non-leap year)");
			}
			break;
		default:
			throw std::invalid_argument("Invalid month (" + to_string(month) + ")");
	}
}

float BitcoinExchange::getValue(const std::string& date) {
	std::string d = date;

	std::string lowestDate = valueHistory.begin()->first;

	while (valueHistory.find(d) == valueHistory.end() && dateCompare(d, lowestDate) > 0) {
		// Search for the previous date
		int year = stringto<int>(d.substr(0, 4));
		int month = stringto<int>(d.substr(5, 2));
		int day = stringto<int>(d.substr(8, 2));
		if (day > 1) {
			day--;
		} else if (month > 1) {
			month--;
			switch (month) {
				case FEBRUARY:
					if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
						day = 29;
					else
						day = 28;
					break;
				case APRIL:
				case JUNE:
				case SEPTEMBER:
				case NOVEMBER:
					day = 30;
					break;
				default:
					day = 31;
			}
		} else {
			year--;
			month = DECEMBER;
			day = 31;
		}
		std::stringstream ss;
		ss << year << "-" << std::setfill('0') << std::setw(2) << month << "-" << std::setw(2) << day;
		d = ss.str();
	}
	if (dateCompare(d, lowestDate) < 0)
		throw std::invalid_argument("Date is earlier than the first date in the database (" + d + " < " + lowestDate + ")");
	return valueHistory[date];
}

std::ostream &operator<<(std::ostream &out, const BitcoinExchange &btc) {
	out << "date,exchange_rate" << std::endl;
	for (std::map<std::string, float>::const_iterator it = btc.valueHistory.begin(); it != btc.valueHistory.end(); it++) {
		out << it->first << "," << it->second << std::endl;
	}
	return out;
}

long BitcoinExchange::dateCompare(std::string date1, std::string date2) {
	date1.erase(std::remove(date1.begin(), date1.end(), '-'), date1.end());
	date2.erase(std::remove(date2.begin(), date2.end(), '-'), date2.end());
	const long d1 = stringto<long>(date1);
	const long d2 = stringto<long>(date2);
	return d1 - d2;
}
