#include <cstdlib>
#include <iostream>
#include <string>

class Base
{
	public:
		virtual ~Base(){};
};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *	generate()
{
	Base *instance = NULL;

	srand (time(NULL));

	int random = rand() % 3;
	if (random == 1)
	{
		instance = new A;
		std::cout << "Instantiation of A. " << std::endl << std::endl;
	}
	else if (random == 2)
	{
		instance = new B;
		std::cout << "Instantiation of B. " << std::endl << std::endl;
	}
	else
	{
		instance = new C;
		std::cout << "Instantiation of C. " << std::endl << std::endl;
	}
	return (instance);
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "This is an instanciation of A (pointer)" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "This is an instanciation of B (pointer)" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "This is an instanciation of C (pointer)" << std::endl;
	else
		std::cout << "Undefined instanciation." << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	a = dynamic_cast<A &>(p);
		std::cout << "This is an instanciation of A (reference)" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B	b = dynamic_cast<B &>(p);
		std::cout << "This is an instanciation of B (reference)" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C	c = dynamic_cast<C &>(p);
		std::cout << "This is an instanciation of C (reference)" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main(void)
{
	
	Base	*base = generate();
	
	identify(base);
	identify(*base);
	delete base;
	return (0);
}