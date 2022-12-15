#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat b("Ciro", 1);

	std::cout << b << std::endl;

	b.decrementGrade();
	b.decrementGrade();
	b.decrementGrade();
	std::cout << b << std::endl;
	b.incrementGrade();
	b.incrementGrade();
	std::cout << b << std::endl;
	try {
		b.incrementGrade();
		b.incrementGrade();
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat c("Ciro", 0);
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat c("Ciro", 151);
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}