
#include "Fixed.hpp"

Fixed::Fixed() {
	num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	num = other.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed Fixed::operator=(Fixed other) {
	return Fixed(other);
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