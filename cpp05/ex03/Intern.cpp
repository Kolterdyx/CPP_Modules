//
// Created by Ciro Garcia belmonte on 12/16/22.
//

#include "Intern.hpp"

// Canonical form with colored output.
// White font color.
Intern::Intern() {
	std::cout << "\033[1;37mIntern created\033[0m" << std::endl;
}

Intern &Intern::operator=(Intern const &other) {
	std::cout << "\033[1;37mIntern assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		// This is where I would copy my data, if I had any!
	}
	return *this;
}

Intern::Intern(Intern const &other) {
	std::cout << "\033[1;37mIntern copy constructor called\033[0m" << std::endl;
	*this = other;
}

Intern::~Intern() {
	std::cout << "\033[1;37mIntern destructor called\033[0m" << std::endl;
}

Form *Intern::makeForm(const std::string &formName, const std::string &target) {
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(*formFunctions[3])(std::string const &target) = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return formFunctions[i](target);
		}
	}
	std::cout << "Intern can't create " << formName << std::endl;
	return nullptr;
}

Form *Intern::makeShrubberyCreationForm(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(const std::string &target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(const std::string &target) {
	return new PresidentialPardonForm(target);
}
