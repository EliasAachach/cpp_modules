#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed&		operator=( Fixed const & rhs );

		bool		operator<(Fixed const &rhs) const;
		bool		operator>(Fixed const &rhs) const;
		bool		operator<=(Fixed const &rhs) const;
		bool		operator>=(Fixed const &rhs) const;
		bool		operator==(Fixed const &rhs) const;
		bool		operator!=(Fixed const &rhs) const;

		Fixed		operator+(Fixed const &rhs) const;
		Fixed		operator-(Fixed const &rhs) const;
		Fixed		operator*(Fixed const &rhs) const;
		Fixed		operator/(Fixed const &rhs) const;

		Fixed		operator++(int);
		Fixed&		operator++();
		Fixed		operator--(int);
		Fixed&		operator--();

		static const Fixed&	min( const Fixed &lhs, const Fixed &rhs );
		static Fixed&	min( Fixed &lhs, Fixed &rhs );
		static const Fixed&	max( const Fixed &lhs, const Fixed &rhs );
		static Fixed&	max( Fixed &lhs, Fixed &rhs );


	private:

		int	_rawBits;
		static int const	_fractRawBits = 8;

};

	std::ostream&		operator<<( std::ostream &out, Fixed const & rhs );

#endif /* *********************************************************** FIXED_H */
