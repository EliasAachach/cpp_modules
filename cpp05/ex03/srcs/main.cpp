#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "---Form wrong executing test---" << std::endl << std::endl;
	try
	{
		Bureaucrat didier("Didier", 1);
		Bureaucrat julien("Julien", 1);
		Intern	intern;
		AForm *wrongForm;
		wrongForm = intern.makeForm("wrong creation", "jardin");
		std::cout << *wrongForm << std::endl;
		wrongForm->beSigned(didier);
		julien.executeForm(*wrongForm);
		didier.executeForm(*wrongForm);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---Form INTERN SHRUBBERY executing working test---" << std::endl << std::endl;
	try
	{
		Bureaucrat didier("Didier", 1);
		Bureaucrat julien("Julien", 1);
		Intern	intern;
		AForm *shrubberyForm;
		shrubberyForm = intern.makeForm("shrubbery creation", "jardin");
		std::cout << *shrubberyForm << std::endl;
		shrubberyForm->beSigned(didier);
		julien.executeForm(*shrubberyForm);
		didier.executeForm(*shrubberyForm);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---Form INTERN ROBOTOMY executing working test---" << std::endl << std::endl;
	try
	{
		Bureaucrat didier("Didier", 1);
		Bureaucrat julien("Julien", 1);
		Intern	intern;
		AForm *robotomyForm;
		robotomyForm = intern.makeForm("robotomy request", "Zaphod");
		std::cout << *robotomyForm << std::endl;
		robotomyForm->beSigned(didier);
		julien.executeForm(*robotomyForm);
		didier.executeForm(*robotomyForm);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---Form PRESIDENTIAL executing working test---" << std::endl << std::endl;
	try
	{
		Bureaucrat didier("Didier", 1);
		Bureaucrat julien("Julien", 1);
		Intern	intern;
		AForm *presidentialForm;
		presidentialForm = intern.makeForm("presidential pardon", "Arthur Dent");
		std::cout << *presidentialForm << std::endl;
		presidentialForm->beSigned(didier);
		julien.executeForm(*presidentialForm);
		didier.executeForm(*presidentialForm);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}