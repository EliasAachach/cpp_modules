#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->_rawBits = 0;
}

Fixed::Fixed( const Fixed & src )
{
	*this = src;
}

Fixed::Fixed(const int value)
{
	this->_rawBits = value << this->_fractRawBits;
}

Fixed::Fixed(const float value)
{
	this->_rawBits = (int)roundf((value * (1 << this->_fractRawBits)));;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed&				Fixed::operator=( Fixed const & rhs )
{
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

/*	Comparison Operators	*/

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->_rawBits < rhs.getRawBits());
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_rawBits > rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_rawBits <= rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_rawBits >= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_rawBits == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_rawBits != rhs.getRawBits());
}

/*	Arithmetic Operators	*/

Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed	ret;
		
	ret.setRawBits(this->_rawBits + rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed	ret;
		
	ret.setRawBits(this->_rawBits - rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed	ret(this->toFloat() / rhs.toFloat());
		
	return (ret);
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed	ret(this->toFloat() * rhs.toFloat());
		
	return (ret);
}

/*	Incrementation/Decrememntation Operators	*/

Fixed	Fixed::operator++(int)
{
	Fixed ret = *this;

	this->_rawBits++;
	return (ret);
}

Fixed	&Fixed::operator++()
{
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed ret = *this;

	this->_rawBits--;
	return (ret);
}

Fixed	&Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}

/*	Min and Max	*/
Fixed&	Fixed::min( Fixed &lhs, Fixed &rhs)
{
	return (lhs < rhs ? lhs : rhs);
}

const Fixed&	Fixed::min( const Fixed &lhs, const Fixed &rhs )
{
	return (lhs < rhs ? lhs : rhs);
}

Fixed&	Fixed::max( Fixed &lhs, Fixed &rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

const Fixed&	Fixed::max( const Fixed &lhs, const Fixed &rhs )
{
	return (lhs > rhs ? lhs : rhs);
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