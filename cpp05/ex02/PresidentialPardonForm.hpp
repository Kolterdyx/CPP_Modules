//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#ifndef CPP_MODULES_PRESIDENTIALPARDONFORM_HPP
#define CPP_MODULES_PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
	std::string target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	~PresidentialPardonForm();

	// Constructors
	PresidentialPardonForm(std::string target);

	// Getters
	std::string const &getTarget() const;

	// Methods
	void execute(Bureaucrat const &executor) const;

};


#endif //CPP_MODULES_PRESIDENTIALPARDONFORM_HPP
