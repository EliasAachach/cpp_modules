#include "Cat.hpp"

/*
* 			CONSTRUCTOR
*/

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat defult constructor called." << std::endl;
	this->_type = "defaultCat";
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	return ;
}

/*
* 			DESTRUCTOR
*/

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

/*
* 			OVERLOAD
*/

Cat  &Cat::operator=( Cat const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

/*
* 			METHOD
*/

void	Cat::makeSound() const
{
	std::cout << "Meoooow ! 🐱" << std::endl;
}