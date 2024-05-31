
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>

# define MAX_TYPE(t) ((t)(~((unsigned t)-1 << (sizeof(t) * 8 - 1))))
# define MIN_TYPE(t) ((t)(((unsigned t)-1 << (sizeof(t) * 8 - 1))))


template<typename T>
void message(const std::string &str, T t, bool err) {
	if (err) {
		std::cout << str << "impossible\n";
	} else {
		std::cout << str << t << "\n";
	}
}

bool convertLiterals(const std::string &str);

void convertRaw(const std::string &str);

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