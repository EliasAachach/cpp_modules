#include "Dog.hpp"

/*
* 			CONSTRUCTOR
*/

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
	this->_type = "defaultDog";
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	return ;
}

/*
* 			DESTRUCTOR
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	return ;
}

/*
* 			OVERLOAD
*/

Dog  &Dog::operator=( Dog const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

/*
* 			METHOD
*/

void	Dog::makeSound() const
{
	std::cout << "Bark Bark ! 🐶" << std::endl;
}