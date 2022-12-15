#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat b("Ciro", 1);

	std::cout << "Grade: " << b.getGrade() << std::endl;
	std::cout << "Name: " << b.getName() << std::endl;

	try {
		Bureaucrat c("Ciro", 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat c("Ciro", 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}