
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat& rhs) {
	std::cout << "Cat assignment operator called" << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
