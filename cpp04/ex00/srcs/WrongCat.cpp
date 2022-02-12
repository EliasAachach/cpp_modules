#include "WrongCat.hpp"

/*
* 			CONSTRUCTOR
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	this->_type = "defaultWrongCat";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	return ;
}

/*
* 			DESTRUCTOR
*/

WrongCat::~WrongCat()
{
	return ;
}

/*
* 			OVERLOAD
*/

WrongCat  &WrongCat::operator=( WrongCat const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

/*
* 			METHOD
*/

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meoooow ! 🐱" << std::endl;
}