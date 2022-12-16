//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << "\033[1;37mRobotomyRequestForm default constructor called\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) {
	std::cout << "\033[1;37mRobotomyRequestForm copy constructor called\033[0m" << std::endl;
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	std::cout << "\033[1;37mRobotomyRequestForm assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		this->target = other.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "\033[1;37mRobotomyRequestForm destructor called\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("RobotomyRequestForm", 72, 45), target(target) {
	std::cout << "\033[1;37mRobotomyRequestForm constructor called\033[0m" << std::endl;
}

std::string const &RobotomyRequestForm::getTarget() const {
	return target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "Drilling noises" << std::endl;
	if (rand() % 2) {
		std::cout << target << " has been robotomized successfully." << std::endl;
	} else {
		std::cout << "Failed to robotomize " << target << "." << std::endl;
	}
}
