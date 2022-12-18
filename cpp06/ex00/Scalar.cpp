
#include "Scalar.hpp"

// Canonical form with descriptive messages printed to std::cout.
// The text will be colored white.

Scalar::Scalar()
{
	std::cout << "\033[1;37mScalar default constructor called\033[0m" << std::endl;
}

Scalar::Scalar(std::string str)
{
	std::cout << "\033[1;37mScalar constructor called\033[0m" << std::endl;
	_str = str;
}

Scalar::Scalar(Scalar const &other)
{
	std::cout << "\033[1;37mScalar copy constructor called\033[0m" << std::endl;
	*this = other;
}

Scalar &Scalar::operator=(Scalar const &other)
{
	std::cout << "\033[1;37mScalar assignment operator called\033[0m" << std::endl;
	if (this != &other)
		_str = other._str;
	return (*this);
}

Scalar::~Scalar()
{
	std::cout << "\033[1;37mScalar destructor called\033[0m" << std::endl;
}

char charTest(std::string s){
	if (s.length() == 3 && s[0] == '\'' && s[2] == '\'')
		return (char)s[1];
	return -1;
}

void Scalar::convertToChar() {
	char c = charTest(_str);
	if (c == -1) {
		try {
			c = static_cast<char>(std::stoi(_str));
		} catch (std::exception &e) {
			std::cout << "char: impossible" << std::endl;
			return;
		}
	}
	if (c < 32 || c > 126) {
		std::cout << "char: Non displayable" << std::endl;
		return;
	}
	std::cout << "char: '" << c << "'" << std::endl;
}


void Scalar::convertToInt() {
	char c = charTest(_str);
	if (c != -1) {
		std::cout << "int: " << (int)c << std::endl;
		return;
	}
	try {
		std::cout << "int: " << std::stoi(_str) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "int: impossible" << std::endl;
	}
}

void Scalar::convertToFloat() {
	char c = charTest(_str);
	if (c != -1) {
		std::cout << "float: " << (float)c << ".0f" << std::endl;
		return;
	}
	try {
		float f = std::stof(_str);
		if (f - (int)f == 0)
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "float: impossible" << std::endl;
	}
}

void Scalar::convertToDouble() {
	char c = charTest(_str);
	if (c != -1) {
		std::cout << "double: " << (double)c << ".0" << std::endl;
		return;
	}
	try {
		double d = std::stod(_str);
		if (d - (int)d == 0)
			std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "double: impossible" << std::endl;
	}
}

