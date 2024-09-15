//
// Created by Ciro Garcia belmonte on 3/20/23.
//

#ifndef CPP_MODULES_BITCOINEXCHANGE_HPP
#define CPP_MODULES_BITCOINEXCHANGE_HPP


#include <map>
#include <sstream>

template <typename T>
std::string to_string(T value) {
	std::ostringstream os;
	os << value;
	return os.str();
}

template <typename T>
T stringto(const std::string &str) {
	std::istringstream ss(str);
	T num;
	ss >> num;
	return num;
}

class BitcoinExchange {

private:
	std::map<std::string, float> valueHistory;

	static long dateCompare(std::string date1, std::string date2);

public:
	BitcoinExchange();
	explicit BitcoinExchange(const std::string &database_csv);
	BitcoinExchange(BitcoinExchange const &other);
	BitcoinExchange &operator=(BitcoinExchange const &other);
	~BitcoinExchange();

	void addValue(std::string date, float value);
	float getValue(const std::string& date);

	friend std::ostream &operator<<(std::ostream &out, const BitcoinExchange &btc);

	static void verifyDate(int year, int month, int day);

};


#endif //CPP_MODULES_BITCOINEXCHANGE_HPP
