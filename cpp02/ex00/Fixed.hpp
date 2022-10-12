
#include <iostream>

class Fixed {

private:
	int num;
	static const int fract_bits = 8;


public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed operator=(Fixed other);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);
};