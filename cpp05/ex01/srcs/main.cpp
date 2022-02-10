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
		std::cerr << e.what() << '\n';
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
		std::cerr << e.what() << '\n';
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
}