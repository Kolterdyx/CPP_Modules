
#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed {

private:
	int num;
	static const int fract_bits = 16;

	float getDecimalPart() const;
	float getWholePart() const;

	void setWholePart(uint32_t n);
	void setDecimalPart(uint32_t n);

public:
	Fixed();
	Fixed(const int32_t);
	Fixed(const float);
	Fixed(const Fixed &other);
	Fixed operator=(const Fixed& other);
	~Fixed();

	float toFloat() const;
	int toInt() const;
	int getRawBits() const;
	void setRawBits(int const raw);

	friend std::ostream& operator<<(std::ostream& os, const Fixed& f);
};

#endif
