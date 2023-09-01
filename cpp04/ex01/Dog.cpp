
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << WHITE << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	std::cout << WHITE << "Dog copy constructor called" << RESET << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	std::cout << WHITE << "Dog destructor called" << RESET << std::endl;
}

Dog & Dog::operator=(const Dog& rhs) {
	std::cout << WHITE << "Dog assignment operator called" << RESET << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woof" << std::endl;
}
