//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#ifndef CPP_MODULES_BUREAUCRAT_HPP
#define CPP_MODULES_BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
	std::string const name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	Bureaucrat(std::string name, int grade);

	// Exceptions
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	// Getters
	std::string const &getName() const;
	int getGrade() const;

	// Methods

	void incrementGrade();
	void decrementGrade();

	void signForm(Form &form);
	void executeForm(Form &form);

	// Overloads

	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
};


#endif //CPP_MODULES_BUREAUCRAT_HPP
