#include "Brain.hpp"
#include "Cat.hpp"

/*
* 			CONSTRUCTOR
*/

Cat::Cat() : AAnimal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
	this->_type = "defaultCat";
}

Cat::Cat(Cat const & src) : AAnimal(src), _brain(new Brain(*src._brain))
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
	delete this->_brain;
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

/*
* 			ACCESSOR
*/

Brain	*Cat::getBrain() const
{
	return(this->_brain);
}