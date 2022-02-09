#include "AAnimal.hpp"

/*
* 			CONSTRUCTOR
*/

AAnimal::AAnimal()
{
	this->_type = "AAnimal";
	std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = src;
}

AAnimal::AAnimal(std::string const type) : _type(type)
{
	std::cout << "AAnimal type constructor called." << std::endl;
}

/*
* 			DESTRUCTOR
*/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}

/*
* 			OVERLOAD
*/

AAnimal  &AAnimal::operator=( const AAnimal & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

/*
* 			ACCESSORS
*/

std::string	AAnimal::getType() const
{
	return (this->_type);
}
