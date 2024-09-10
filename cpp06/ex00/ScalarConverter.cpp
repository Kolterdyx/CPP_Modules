
#include "ScalarConverter.hpp"

#include <iomanip>
#include <limits>

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
	if (!isCharLiteral(str)) {
		convertRaw(str, false);
	} else {
		convertRaw(str.substr(1, str.size()-2), true);
	}
}

bool isCharLiteral(const std::string &str) {

	if (!(str[0] == '\'' || str[str.size()-1] == '\''))
		return false;

	return true;
}

std::string castNumberLiteral(const std::string &str) {
	if (str == "nan" || str == "-inf" || str == "+inf")
		return str;
	if (str == "-inff" || str == "+inff" || str == "nanf") {
		return str.substr(0, str.size()-1);
	}
	return "";
}

int countDecimals(const std::string &str) {
	size_t i = 0;
	if (str.find('.') == std::string::npos)
		return 1;
	for (; i < str.size(); i++) {
		if (str[i] == '.')
			break;
	}
	return static_cast<int>(str.size() - i - 1);
}

void convertRaw(const std::string &str, bool isChar) {
	char c = 0;
	int i = 0;
	float f = 0;
	double d = 0;

	int lc = isChar ? str[0] : streamcast<int>(str);
	long int li = isChar ? str[0] : streamcast<long>(str);
	long double lf = isChar ? str[0] : streamcast<double>(str);
	long double ld = isChar ? str[0] : streamcast<long double>(str);

	bool errc = false;
	bool erri = false;
	bool errf = false;
	bool errd = false;


	std::string number_literal  = castNumberLiteral(str);
	if (!number_literal.empty()) {
		std::cout << "char:    impossible\n";
		std::cout << "int:     impossible\n";
		std::cout << "float:   " << number_literal << "f\n";
		std::cout << "double:  " << number_literal << "\n";
		return;
	}
	
	if (lc < 0 || lc > (1 << 7))
		errc = true;
	else
		c = static_cast<char>(lc);
	
	if (li > std::numeric_limits<int>::max() || li < std::numeric_limits<int>::min() )
		erri = true;
	else
		i = static_cast<int>(li);

	if (lf > std::numeric_limits<float>::max() || lf < -std::numeric_limits<float>::max())
		errf = true;
	else
		f = static_cast<float>(lf);

	if (ld > std::numeric_limits<double>::max() || ld < -std::numeric_limits<double>::max())
		errd = true;
	else
		d = static_cast<double>(ld);


	std::stringstream sc;
	if (c < 33 || c > 126)
		sc << "Non-displayable";
	else
		sc << "'" << c << "'";
	std::stringstream si;
	si << i;

	int precision = countDecimals(str);
	std::stringstream sf;
	sf << std::fixed << std::setprecision(precision) << f << "f";
	std::stringstream sd;
	sd << std::fixed << std::setprecision(precision) << d;


	message("char:    ", sc.str(), errc);
	message("int:     ", si.str(), erri);
	message("float:   ", sf.str(), errf);
	message("double:  ", sd.str(), errd);
}
