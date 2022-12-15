//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#include "PresidentialPardonForm.hpp"

// Canonical form with colored output for the methods
// White text, reset at the end of each line

PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << "\033[1;37mPresidentialPardonForm default constructor called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) {
	std::cout << "\033[1;37mPresidentialPardonForm copy constructor called\033[0m" << std::endl;
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	std::cout << "\033[1;37mPresidentialPardonForm assignation operator called\033[0m" << std::endl;
	if (this != &other) {
		this->target = other.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "\033[1;37mPresidentialPardonForm destructor called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target) {
	std::cout << "\033[1;37mPresidentialPardonForm constructor called\033[0m" << std::endl;
}

std::string const &PresidentialPardonForm::getTarget() const {
	return target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}