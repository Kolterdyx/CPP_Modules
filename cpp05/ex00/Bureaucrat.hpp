//
// Created by Ciro Garcia belmonte on 12/15/22.
//

#ifndef CPP_MODULES_BUREAUCRAT_HPP
#define CPP_MODULES_BUREAUCRAT_HPP

#include <iostream>

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
		GradeTooHighException();
		GradeTooHighException(const GradeTooHighException &other);
		GradeTooHighException &operator=(const GradeTooHighException &other);
		~GradeTooHighException() throw();
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		GradeTooLowException(const GradeTooLowException &other);
		GradeTooLowException &operator=(const GradeTooLowException &other);
		~GradeTooLowException() throw();
		virtual const char *what() const throw();
	};

	// Getters
	std::string const &getName() const;
	int getGrade() const;
};


#endif //CPP_MODULES_BUREAUCRAT_HPP
