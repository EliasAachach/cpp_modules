#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor is called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor is called" << std::endl;
	this->_rawBits = value << this->_fractRawBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor is called" << std::endl;
	this->_rawBits = (int)roundf((value * (1 << this->_fractRawBits)));;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor is called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
	{
		this->_rawBits = rhs.getRawBits();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function is called" << std::endl;
	return (this->_rawBits);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function is called" << std::endl;
	this->_rawBits = raw;

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */