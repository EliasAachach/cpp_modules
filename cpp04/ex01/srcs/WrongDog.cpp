#include "WrongDog.hpp"

/*
* 			CONSTRUCTOR
*/

WrongDog::WrongDog() : WrongAnimal("WrongDog")
{
	this->_type = "defaultWrongDog";
}

WrongDog::WrongDog(WrongDog const & src) : WrongAnimal(src)
{
	return ;
}

/*
* 			DESTRUCTOR
*/

WrongDog::~WrongDog()
{
	return ;
}

/*
* 			OVERLOAD
*/

WrongDog  &WrongDog::operator=( WrongDog const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

/*
* 			METHOD
*/

void	WrongDog::makeSound() const
{
	std::cout << "Bark Bark ! 🐶" << std::endl;
}