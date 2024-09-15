

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>


int main(int argc, char **argv) {
	BitcoinExchange btc("data.csv");

	if (argc != 2) {
		std::cout << "Usage: ./btc <input file>" << std::endl;
		return 1;
	}

	std::string filename(argv[1]);
	std::ifstream file((filename.data()));
	std::string line;
	int i = -1;

	while (std::getline(file, line)) {
		i++;
		// Verify line format
		if (line.find('|') == std::string::npos) {
			std::cout << "Error (line " + to_string(i + 1) + "): Invalid line format\n";
			continue;
		}

		std::string date = line.substr(0, line.find('|'));
		std::string valueStr = line.substr(line.find('|') + 1);

		// strip whitespace
		date.erase(std::remove(date.begin(), date.end(), ' '), date.end());
		valueStr.erase(std::remove(valueStr.begin(), valueStr.end(), ' '), valueStr.end());

		if (date == "date" && valueStr == "value" && i == 0)
			continue;
		else if (i == 0) {
			std::cout << "Error (line " + to_string(i + 1) +
						 "): Invalid header\n";
			continue;
		}

		// Verify date format
		if (date.length() != 10 || (date[4] != '-' || date[7] != '-')) {
			std::cout << "Error (line " + to_string(i + 1) + "): Invalid date format\n";
			continue;
		}

		int year = stringto<int>(date.substr(0, 4));
		int month = stringto<int>(date.substr(5, 2));
		int day = stringto<int>(date.substr(8, 2));
		try {
			BitcoinExchange::verifyDate(year, month, day);
		} catch (std::invalid_argument &e) {
			std::cout << "Error (line " + to_string(i + 1) + "): " << e.what() << std::endl;
			continue;
		}

		float value;
		try {
			value = stringto<float>(valueStr);
			if (value < 0)
				throw std::invalid_argument("Value is negative (" + valueStr + ")");
			if (value > 1000)
				throw std::invalid_argument("Value is greater than 1000 (" + valueStr + ")");
		} catch (std::invalid_argument &e) {
			std::cout << "Error (line " + to_string(i + 1) + "): " << e.what() << "\n";
			continue;
		}

		try {
			float result = btc.getValue(date);
			std::cout << date << " => " << value << " = " << result << std::endl;
		} catch (std::invalid_argument &e) {
			std::cout << "Error (line " + to_string(i + 1) + "): " << e.what() << std::endl;
		}
	}
}