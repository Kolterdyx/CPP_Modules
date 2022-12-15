#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

	std::cout << "ShrubberyCreationForm" << std::endl;

	ShrubberyCreationForm shrub;
	ShrubberyCreationForm shrub2("home");

	std::cout << shrub << std::endl;
	std::cout << shrub2 << std::endl;


	std::cout << "RobotomyRequestForm" << std::endl;

	RobotomyRequestForm robot;
	RobotomyRequestForm robot2("Wall-E");

	std::cout << robot << std::endl;
	std::cout << robot2 << std::endl;

	std::cout << "PresidentialPardonForm" << std::endl;

	PresidentialPardonForm pres;
	PresidentialPardonForm pres2("Paco");

	std::cout << pres << std::endl;
	std::cout << pres2 << std::endl;

}