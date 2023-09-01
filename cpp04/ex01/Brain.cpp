//
// Created by Ciro Garcia belmonte on 12/12/22.
//

#include "Brain.hpp"


// Canonic form

Brain::Brain() {
	std::cout << WHITE << "Brain default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << WHITE << "Brain copy constructor called" << RESET << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain& other) {
	std::cout << WHITE << "Brain assignment operator called" << RESET << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << WHITE << "Brain destructor called" << RESET << std::endl;
}

std::string Brain::getIdea(int i) const {
	return this->ideas[i];
}