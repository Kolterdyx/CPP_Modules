

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << WHITE << "Animal default constructor called" << RESET << std::endl;
	brain = new Brain();
}

Animal::Animal(std::string type) : type(type) {
	std::cout << WHITE << "Animal constructor called" << RESET << std::endl;
	brain = new Brain();
}

Animal::Animal(Animal const & src) {
	std::cout << WHITE << "Animal copy constructor called" << RESET << std::endl;
	*this = src;
}

Animal::~Animal(void) {
	delete brain;
	std::cout << WHITE << "Animal destructor called" << RESET << std::endl;
}

Animal & Animal::operator=(Animal const & rhs) {
	std::cout << WHITE << "Animal assignment operator called" << RESET << std::endl;
	if (this != &rhs) {
		this->type = rhs.type;
		*this->brain = *rhs.brain;
	}
	return (*this);
}

std::string Animal::getType(void) const {
	return (this->type);
}

void Animal::makeSound(void) const {
	std::cout << "Animal sound" << std::endl;
}
