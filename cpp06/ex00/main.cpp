

#include "ScalarConverter.hpp"

/*
 * Number max and min values
 *
 * char: -128 to 127
 * int: -2147483648 to 2147483647
 */

int main(const int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);


}