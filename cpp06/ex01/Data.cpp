

#include "Data.hpp"


// Canonical form with descriptive messages printed to std::cout.
// The text will be colored white.

Data::Data() : _n(), _str()
{
	std::cout << "\033[1;37mData default constructor called\033[0m" << std::endl;
}

Data::Data(Data const &other)
{
	std::cout << "\033[1;37mData copy constructor called\033[0m" << std::endl;
	*this = other;
}

Data &Data::operator=(Data const &other)
{
	std::cout << "\033[1;37mData assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		_str = other._str;
		_n = other._n;
	}
	return (*this);
}

Data::~Data()
{
	std::cout << "\033[1;37mData destructor called\033[0m" << std::endl;
}

int Data::getN() const {
	return _n;
}

std::string Data::getStr() const {
	return _str;
}

void Data::setN(int n) {
	_n = n;
}

void Data::setStr(const std::string& str) {
	_str = str;
}

std::ostream &operator<<(std::ostream &os, const Data &data) {
	os << "{str: \"" << data._str << "\", n: " << data._n << "}";
	return os;
}
