
#ifndef EX02_FIXED_HPP
#define EX02_FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed {

private:
	int num;
	static const int fract_bits = 8;

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

	friend bool operator==(const Fixed& a, const Fixed& b);
	friend bool operator!=(const Fixed& a, const Fixed& b);
	friend bool operator<=(const Fixed& a, const Fixed& b);
	friend bool operator>=(const Fixed& a, const Fixed& b);
	friend bool operator<(const Fixed& a, const Fixed& b);
	friend bool operator>(const Fixed& a, const Fixed& b);

	Fixed& operator++();
	Fixed& operator--();
	const Fixed operator++(int);
	const Fixed operator--(int);

	static Fixed const& max(const Fixed& a, const Fixed& b);
	static Fixed const& min(const Fixed& a, const Fixed& b);

	friend const Fixed operator+(const Fixed& a, const Fixed& b);
	friend const Fixed operator-(const Fixed& a, const Fixed& b);
	friend const Fixed operator*(const Fixed& a, const Fixed& b);
	friend const Fixed operator/(const Fixed& a, const Fixed& b);

	friend std::ostream& operator<<(std::ostream& os, const Fixed& f);
};

#endif
