//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#include "Form.hpp"

#include <iostream>

// Canonical form with colored output for the methods
// White text, reset at the end of each line

Form::Form() : name("default"), isSigned(false), gradeToSign(1), gradeToExecute(1) {
	std::cout << "\033[1;37mForm default constructor called\033[0m" << std::endl;
}

Form::Form(const Form &other) : name("default"), isSigned(false), gradeToSign(1), gradeToExecute(1) {
	std::cout << "\033[1;37mForm copy constructor called\033[0m" << std::endl;
	*this = other;
}

Form &Form::operator=(const Form &other) {
	std::cout << "\033[1;37mForm assignation operator called\033[0m" << std::endl;
	if (this != &other) {
		this->isSigned = other.isSigned;
	}
	return *this;
}

Form::~Form() {
	std::cout << "\033[1;37mForm destructor called\033[0m" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	std::cout << "\033[1;37mForm constructor called\033[0m" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else
		this->isSigned = false;
}

// Overload of << operator
std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "Form " << form.getName() << " with grade to sign " << form.getGradeToSign() << " and grade to execute " << form.getGradeToExecute() << " is signed " << form.getIsSigned();
	return os;
}

// Exceptions

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

// Getters

std::string const &Form::getName() const {
	return this->name;
}

int Form::getGradeToSign() const {
	return this->gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->gradeToExecute;
}

bool Form::getIsSigned() const {
	return this->isSigned;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->gradeToSign)
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}
