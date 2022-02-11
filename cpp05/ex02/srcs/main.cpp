#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Default bureaucrat :" << std::endl;
	try
	{
		Bureaucrat base;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "Bureaucrat name constructor, grade 150:" << std::endl;
	try
	{
		Bureaucrat named("Julien", 150);
		named.incrGrade();
		std::cout << named << std::endl;
		named.decrGrade();
		std::cout << named << std::endl;
		named.decrGrade();
		std::cout << named << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "Bureaucrat name constructor, grade 1:" << std::endl;
	try
	{
		Bureaucrat named("Didier", 1);
		named.decrGrade();
		std::cout << named << std::endl;
		named.incrGrade();
		std::cout << named << std::endl;
		named.incrGrade();
		std::cout << named << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "---Form test---" << std::endl << std::endl;
	try
	{
		Form	badForm("badForm", 0, 122);
		std::cout << badForm << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{

		Form	goodForm("goodForm", 10, 4);
		std::cout << goodForm << std::endl;

	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---Sign test---" << std::endl << std::endl;
	try
	{
		Bureaucrat didier("Didier", 1);
		Bureaucrat julien("Julien", 150);
		Form	goodForm("goodForm", 10, 4);
		std::cout << goodForm << std::endl;
		julien.signForm(goodForm);
		didier.signForm(goodForm);
		goodForm.beSigned(julien);
		goodForm.beSigned(didier);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}