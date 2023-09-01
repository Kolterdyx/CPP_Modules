
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << WHITE << "Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout << WHITE << "Cat copy constructor called" << RESET << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	std::cout << WHITE << "Cat destructor called" << RESET << std::endl;
}

Cat & Cat::operator=(const Cat& rhs) {
	std::cout << WHITE << "Cat assignment operator called" << RESET << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
