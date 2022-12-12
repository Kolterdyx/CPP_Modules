
#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed a;

	a.setRawBits(20);

	Fixed b(a);
	Fixed c;


	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;

	a.setRawBits(42);

	c = b;

	c.setRawBits(123);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}
