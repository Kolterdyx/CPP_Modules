
#include "Fixed.hpp"

static float	power(int base, int exp)
{
	float	result;

	result = 0;
	if (exp == 0)
		result = (1);
	else if (exp == 1)
		result = (base);
	else if (exp == 2)
		result = (base * base);
	else if (exp > 2)
		result = (base * power(base, exp - 1));
	else if (exp < 0)
		result = (1.0f / power(base, -exp));
	return (result);
}

static uint32_t	reverse_bits(uint32_t bitset, uint32_t bits)
{
	uint32_t	r;

	r = 0;
	for (int i = bits; i > 0; --i)
	{
		r = (r << 1) | (bitset & 1);
		bitset >>= 1;
	}
	return (r);
}

Fixed::Fixed()
{
	num = 0;
	#ifdef DEBUG
	std::cout << "Default constructor called" << std::endl;
	#endif
}

Fixed::Fixed(int n)
{
	num = n << fract_bits;

	#ifdef DEBUG
	std::cout << "Int constructor called" << std::endl;
	#endif
}

Fixed::Fixed(float n)
{
	num = roundf(n * (0b1 << fract_bits));
#ifdef DEBUG
	std::cout << "Float constructor called" << std::endl;
#endif
}

Fixed::Fixed(const Fixed &other)
{
	num = other.num;
	LOG("Copy constructor called");
}

Fixed Fixed::operator=(const Fixed& other)
{
	LOG("Copy assignment operator called");
	if (this != &other)
		num = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	LOG("getRawBits member function called");
	return (num);
}

void Fixed::setRawBits(int const raw)
{
	LOG("setRawBits member function called");
	num = (int)raw;
}

Fixed::~Fixed()
{
	LOG("Destructor called");
}

float Fixed::getDecimalPart() const
{
	float result = 0;

	for (int i = 0; i < fract_bits; i++)
	{
		if (reverse_bits(num, fract_bits) & (0b1 << i))
		{
			result += power(2, -i - 1);
		}
	}
	return (result);
}

float Fixed::getWholePart() const
{
	return (float)(num >> fract_bits);
}

float Fixed::toFloat() const
{
	return (getWholePart() + getDecimalPart());
}

int Fixed::toInt() const
{
	return (int)getWholePart();
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}

bool operator==(const Fixed& a, const Fixed& b) {
	return a.getRawBits() == b.getRawBits();
}
bool operator!=(const Fixed& a, const Fixed& b) {
	return a.getRawBits() != b.getRawBits();
}
bool operator<=(const Fixed& a, const Fixed& b) {
	return a.getRawBits() <= b.getRawBits();
}
bool operator>=(const Fixed& a, const Fixed& b) {
	return a.getRawBits() >= b.getRawBits();
}
bool operator<(const Fixed& a, const Fixed& b) {
	return a.getRawBits() < b.getRawBits();
}
bool operator>(const Fixed& a, const Fixed& b) {
	return a.getRawBits() > b.getRawBits();
}

Fixed& Fixed::operator++() {
	++num;
	return *this;
}
Fixed& Fixed::operator--() {
	--num;
	return *this;
}
const Fixed Fixed::operator++(int) {
	Fixed f = *this;
	num++;
	return f;
}
const Fixed Fixed::operator--(int) {
	Fixed f = *this;
	num--;
	return f;
}

Fixed const& Fixed::max(const Fixed& a, const Fixed& b) {
	return a >= b ? a : b;
}

Fixed const& Fixed::min(const Fixed& a, const Fixed& b) {
	return a <= b ? a : b;
}

const Fixed operator+(const Fixed& a, const Fixed& b) {
	return Fixed(a.toFloat() + b.toFloat());
}

const Fixed operator-(const Fixed& a, const Fixed& b) {
	return Fixed(a.toFloat() - b.toFloat());
}

const Fixed operator*(const Fixed& a, const Fixed& b) {
	return Fixed(a.toFloat() * b.toFloat());
}

const Fixed operator/(const Fixed& a, const Fixed& b) {
	return Fixed(a.toFloat() / b.toFloat());
}
