//
// Created by Ciro Garcia belmonte on 12/16/22.
//

#ifndef CPP_MODULES_INTERN_HPP
#define CPP_MODULES_INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Intern {

private:
	static Form *makeShrubberyCreationForm(std::string const &target);
	static Form *makeRobotomyRequestForm(std::string const &target);
	static Form *makePresidentialPardonForm(std::string const &target);

public:
	Intern();
	Intern(Intern const &other);
	Intern &operator=(Intern const &other);
	~Intern();

	Form *makeForm(std::string const &formName, std::string const &target);

};


#endif //CPP_MODULES_INTERN_HPP
