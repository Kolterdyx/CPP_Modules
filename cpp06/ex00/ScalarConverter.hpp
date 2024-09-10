
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>


template<typename T>
void message(const std::string &str, T t, bool err) {
	if (err) {
		std::cout << str << "impossible\n";
	} else {
		std::cout << str << t << "\n";
	}
}

template<typename T>
T streamcast(const std::string &str) {
    std::stringstream ss(str);
    T t;
    ss >> t;
    return t;
}

bool isCharLiteral(const std::string &str);

void convertRaw(const std::string &str, bool isChar);

class ScalarConverter
{
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &other);
	ScalarConverter &operator=(ScalarConverter const &other);
	virtual ~ScalarConverter();

	static void convert(const std::string &str);

};

#endif