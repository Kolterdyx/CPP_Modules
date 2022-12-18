

#include "Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	Scalar scalar(argv[1]);
	scalar.convertToChar();
	scalar.convertToInt();
	scalar.convertToFloat();
	scalar.convertToDouble();
	return (0);
}