//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#ifndef CPP_MODULES_ROBOTOMYREQUESTFORM_HPP
#define CPP_MODULES_ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
	std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	~RobotomyRequestForm();

	// Constructors
	RobotomyRequestForm(const std::string& target);

	// Getters
	std::string const &getTarget() const;

	// Methods
	void execute(Bureaucrat const &executor) const;

};


#endif //CPP_MODULES_ROBOTOMYREQUESTFORM_HPP
