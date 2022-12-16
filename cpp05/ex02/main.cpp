#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void robotomy_request_success_rate() {
	std::cout << " --- RobotomyRequestForm success rate --- " << std::endl;

	Bureaucrat bur = Bureaucrat("Ciro", 1);

	for (int i = 0; i < 100; i++) {
		RobotomyRequestForm robot3("Wall-E");
		bur.signForm(robot3);
		bur.executeForm(robot3);
	}
}

void create_forms() {
	std::cout << " --- ShrubberyCreationForm --- " << std::endl;

	ShrubberyCreationForm shrub;
	ShrubberyCreationForm shrub2("home");

	std::cout << shrub << std::endl;
	std::cout << shrub2 << std::endl;


	std::cout << " --- RobotomyRequestForm --- " << std::endl;

	RobotomyRequestForm robot;
	RobotomyRequestForm robot2("Wall-E");

	std::cout << robot << std::endl;
	std::cout << robot2 << std::endl;

	std::cout << " --- PresidentialPardonForm ---" << std::endl;

	PresidentialPardonForm pres;
	PresidentialPardonForm pres2("Paco");

	std::cout << pres << std::endl;
	std::cout << pres2 << std::endl;
}

void sign_forms() {

	std::cout << " --- Sign forms --- " << std::endl;

	ShrubberyCreationForm shrub("home");
	RobotomyRequestForm robot("Wall-E");
	PresidentialPardonForm pres("Paco");

	Bureaucrat bur("Ciro", 150);

	std::cout << bur << std::endl;

	bur.signForm(shrub);
	bur.signForm(robot);
	bur.signForm(pres);

	std::cout << shrub << std::endl;
	std::cout << robot << std::endl;
	std::cout << pres << std::endl;

	for (int i = 0; i < 10; i++) {
		bur.incrementGrade();
	}

	std::cout << bur << std::endl;
	bur.signForm(shrub);
	bur.signForm(robot);
	bur.signForm(pres);

	std::cout << shrub << std::endl;
	std::cout << robot << std::endl;
	std::cout << pres << std::endl;

	for (int i = 0; i < 70; i++) {
		bur.incrementGrade();
	}

	std::cout << bur << std::endl;
	bur.signForm(robot);
	bur.signForm(pres);

	std::cout << robot << std::endl;
	std::cout << pres << std::endl;

	for (int i = 0; i < 50; i++) {
		bur.incrementGrade();
	}

	std::cout << bur << std::endl;
	bur.signForm(pres);

	std::cout << pres << std::endl;
}

void execute_forms() {

	std::cout << " --- Execute forms --- " << std::endl;

	ShrubberyCreationForm shrub("home");
	RobotomyRequestForm robot("Wall-E");
	PresidentialPardonForm pres("Paco");


	Bureaucrat bur("Ciro", 1);

	std::cout << bur << std::endl;

	bur.executeForm(shrub);
	bur.executeForm(robot);
	bur.executeForm(pres);

	bur.signForm(shrub);
	bur.signForm(robot);
	bur.signForm(pres);

	for (int i = 0; i < 149; i++) {
		bur.decrementGrade();
	}

	std::cout << bur << std::endl;

	bur.executeForm(shrub);
	bur.executeForm(robot);
	bur.executeForm(pres);

	for (int i = 0; i < 15; i++) {
		bur.incrementGrade();
	}

	std::cout << bur << std::endl;

	bur.executeForm(shrub);
	bur.executeForm(robot);
	bur.executeForm(pres);

	for (int i = 0; i < 95; i++) {
		bur.incrementGrade();
	}

	std::cout << bur << std::endl;

	bur.executeForm(robot);
	bur.executeForm(pres);

	for (int i = 0; i < 37; i++) {
		bur.incrementGrade();
	}

	std::cout << bur << std::endl;

	bur.executeForm(pres);
}

int main()
{
	create_forms();
	sign_forms();
	execute_forms();
	robotomy_request_success_rate();

	return 0;
}
