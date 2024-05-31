

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);

	std::cout << (int)MAX_TYPE(char) << std::endl;
	std::cout << (int)MIN_TYPE(char) << std::endl;
	std::cout << MAX_TYPE(int) << std::endl;
	std::cout << MIN_TYPE(int) << std::endl;
}