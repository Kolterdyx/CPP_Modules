
#include "ScalarConverter.hpp"

// Canonical form with descriptive messages printed to std::cout.
// The text will be colored white.

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	if (this != &other) {
		// copy stuff
	}
	return (*this);
}

ScalarConverter::~ScalarConverter() {

}

void ScalarConverter::convert(const std::string &str) {
	if (!convertLiterals(str)) {
		convertRaw(str);
	}
}

bool convertLiterals(const std::string &str) {

	if (!(str[0] == '\'' || str[str.size()-1] == '\''))
		return false;

	return true;
}

void convertRaw(const std::string &str) {
	char c = 0;
	int i = 0;
	float f = 0;
	double d = 0;

	int lc;
	long int li;
	double lf;
	long double ld;

	std::stringstream ss(str);
	ss >> lc;
	ss >> li;
	ss >> lf;
	ss >> ld;

	bool errc = false;
	bool erri = false;
	bool errf = false;
	bool errd = false;
	
	if (lc < 0 || lc > (1 << 7))
		errc = true;
	else
		c = static_cast<char>(lc);
	
	if (li > 1 << (sizeof(int)-1) || li < -(1 << (sizeof(int)-1)))
	;

	if (c < 33 || c > 126)
		message("char:    ", "unprintable", errc);
	else
		message("char:    ", c, errc);
	message("int:     ", i, erri);
	message("float:   ", f, errf);
	message("double:  ", d, errd);
}
