#include "Animal.hpp"

/*
* 			CONSTRUCTOR
*/

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal::Animal(std::string const type) : _type(type)
{
	std::cout << "Animal type constructor called." << std::endl;
}

/*
* 			DESTRUCTOR
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

/*
* 			OVERLOAD
*/

Animal  &Animal::operator=( const Animal & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

/*
* 			METHOD
*/

void	Animal::makeSound() const
{
	std::cout << "Animal." << std::endl;
}

/*
* 			ACCESSORS
*/

std::string	Animal::getType() const
{
	return (this->_type);
}
