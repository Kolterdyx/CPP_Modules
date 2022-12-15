//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#ifndef CPP_MODULES_FORM_HPP
#define CPP_MODULES_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	std::string const name;
	bool isSigned;
	int const gradeToSign;
	int const gradeToExecute;

	// Canonical form with colored output for the methods
	// White text, reset at the end of each line
public:
	Form();
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	Form(std::string name, int gradeToSign, int gradeToExecute);

	// Methods

	void beSigned(Bureaucrat &bureaucrat);

	// Exceptions
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	//Overloads

	friend std::ostream &operator<<(std::ostream &os, const Form &form);

	// Getters
	std::string const &getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

};


#endif //CPP_MODULES_FORM_HPP
