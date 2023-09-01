
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& src);
	virtual ~WrongAnimal(void);

	WrongAnimal & operator=(const WrongAnimal& rhs);

	std::string getType(void) const;
	virtual void makeSound(void) const;

protected:
	std::string type;
};

#endif
