#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "---Form executing test---" << std::endl << std::endl;
	try
	{
		Bureaucrat didier("Didier", 1);
		Bureaucrat julien("Julien", 150);
		ShrubberyCreationForm	shrubberyForm("shrubberyForm");
		std::cout << shrubberyForm << std::endl;
		julien.executeForm(shrubberyForm);
		didier.executeForm(shrubberyForm);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---Form SHRUBBERY executing working test---" << std::endl << std::endl;
	try
	{
		Bureaucrat didier("Didier", 1);
		Bureaucrat julien("Julien", 150);
		ShrubberyCreationForm	shrubberyForm("shrubberyForm");
		std::cout << shrubberyForm << std::endl;
		shrubberyForm.beSigned(didier);
		didier.executeForm(shrubberyForm);
		julien.executeForm(shrubberyForm);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---Form ROBOTOMY executing working test---" << std::endl << std::endl;
	try
	{
		Bureaucrat didier("Didier", 1);
		Bureaucrat julien("Julien", 150);
		RobotomyRequestForm	robotomyForm("robotomyForm");
		std::cout << robotomyForm << std::endl;
		robotomyForm.beSigned(didier);
		didier.executeForm(robotomyForm);
		julien.executeForm(robotomyForm);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---Form PRESIDENTIAL executing working test---" << std::endl << std::endl;
	try
	{
		Bureaucrat didier("Didier", 1);
		Bureaucrat julien("Julien", 150);
		PresidentialPardonForm	presidentialForm("presidentialForm");
		std::cout << presidentialForm << std::endl;
		presidentialForm.beSigned(didier);
		didier.executeForm(presidentialForm);
		julien.executeForm(presidentialForm);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}