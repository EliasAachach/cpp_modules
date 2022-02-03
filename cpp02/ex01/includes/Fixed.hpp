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

	private:

		int	_rawBits;
		static int const	_fractRawBits = 8;

};

	std::ostream&		operator<<( std::ostream &out, Fixed const & rhs );

#endif /* *********************************************************** FIXED_H */
