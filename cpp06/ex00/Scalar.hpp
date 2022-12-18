
#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>

class Scalar
{
private:
	std::string _str;
public:
	Scalar();
	explicit Scalar(std::string str);
	Scalar(Scalar const &other);
	Scalar &operator=(Scalar const &other);
	~Scalar();

	void convertToChar();

	void convertToInt();

	void convertToFloat();

	void convertToDouble();
};

#endif