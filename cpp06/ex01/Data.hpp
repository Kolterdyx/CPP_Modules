
#ifndef CPP_MODULES_DATA_HPP
#define CPP_MODULES_DATA_HPP

#include <iostream>

class Data {

private:
	int _n;
	std::string _str;

public:
	Data();
	Data(Data const &other);
	Data &operator=(Data const &other);
	~Data();

	int getN() const;
	std::string getStr() const;

	void setN(int n);
	void setStr(const std::string& str);

	friend std::ostream &operator<<(std::ostream &os, const Data &data);

};


#endif //CPP_MODULES_DATA_HPP
