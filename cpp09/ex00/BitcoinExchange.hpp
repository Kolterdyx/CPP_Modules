//
// Created by Ciro Garcia belmonte on 3/20/23.
//

#ifndef CPP_MODULES_BITCOINEXCHANGE_HPP
#define CPP_MODULES_BITCOINEXCHANGE_HPP


#include <map>

class BitcoinExchange {

private:
	std::map<std::string, float> valueHistory;

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
