#include "WrongAnimal.hpp"

/*
* 			CONSTRUCTOR
*/

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type)
{
	std::cout << "WrongAnimal type constructor called." << std::endl;
}

/*
* 			DESTRUCTOR
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

/*
* 			OVERLOAD
*/

WrongAnimal  &WrongAnimal::operator=( const WrongAnimal & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

/*
* 			METHOD
*/

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound." << std::endl;
}

/*
* 			ACCESSORS
*/

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
