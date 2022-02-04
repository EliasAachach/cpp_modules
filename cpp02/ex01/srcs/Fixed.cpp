#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value << this->_fractRawBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)roundf((value * (1 << this->_fractRawBits)));;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed&				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator constructor called" << std::endl;
	if ( this != &rhs )
	{
		this->_rawBits = rhs.getRawBits();
	}
	return *this;
}

std::ostream&			operator<<( std::ostream &out, Fixed const & rhs )
{
	out << rhs.getRawBits() / 256.0;
	return (out);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits( void ) const
{
	return (this->_rawBits);
}

void Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
}

int		Fixed::toInt() const
{
	return (this->_rawBits >> this->_fractRawBits);
}

float	Fixed::toFloat() const
{
	return ((float)this->_rawBits / (1 << this->_fractRawBits));
}

/* ************************************************************************** */