#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
	Intern someRandomIntern;

	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;

	Form* scf;
	scf = someRandomIntern.makeForm("shrubbery creation", "home");
	std::cout << *scf << std::endl;

	Form* ppf;
	ppf = someRandomIntern.makeForm("presidential pardon", "Paco");
	std::cout << *ppf << std::endl;

	Form* unknown;
	unknown = someRandomIntern.makeForm("unknown", "unknown");

	delete rrf;
	delete scf;
	delete ppf;

	return 0;
}
