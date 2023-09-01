

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
protected:
	std::string type;
	Brain *brain;

public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal& src);
	virtual ~Animal(void);

	Animal & operator=(const Animal& rhs);

	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif // ANIMAL_HPP