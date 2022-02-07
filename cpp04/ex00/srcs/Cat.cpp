#include "Cat.hpp"

/*
* 			CONSTRUCTOR
*/

Cat::Cat() : Animal("Cat")
{
	this->_type = "defaultCat";
}

Cat::Cat(Cat const & src) : Animal(src)
{
	return ;
}

/*
* 			DESTRUCTOR
*/

Cat::~Cat()
{
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