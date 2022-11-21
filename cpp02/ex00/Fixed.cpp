
#include "Fixed.hpp"

Fixed::Fixed() {
	num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	num = other.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		num = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return num;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	num = (int)raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	
}