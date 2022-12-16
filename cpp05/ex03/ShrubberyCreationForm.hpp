//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#ifndef CPP_MODULES_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULES_SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();

	// Constructors
	ShrubberyCreationForm(std::string target);

	// Getters
	std::string const &getTarget() const;

	// Methods
	void execute(Bureaucrat const &executor) const;

};


#endif //CPP_MODULES_SHRUBBERYCREATIONFORM_HPP
