#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat b("Ciro", 1);

	std::cout << b << std::endl;

	Form f("Test", 1, 1);

	std::cout << f << std::endl;

	b.signForm(f);

	std::cout << f << std::endl;

	Form f2("Test2", 2, 1);

	std::cout << f2 << std::endl;

	b.signForm(f2);

	std::cout << f2 << std::endl;

	Form f3("Test3", 1, 2);

	std::cout << f3 << std::endl;

	b.decrementGrade();
	b.decrementGrade();

	std::cout << b << std::endl;

	b.signForm(f3);

	std::cout << f3 << std::endl;

}