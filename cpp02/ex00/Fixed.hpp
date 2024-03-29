

#ifndef EX02_FIXED_HPP
#define EX02_FIXED_HPP

#include <iostream>

class Fixed {

private:
	int num;
	static const int fract_bits = 8;


public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed operator=(const Fixed& other);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif
