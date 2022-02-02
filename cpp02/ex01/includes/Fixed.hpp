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

		Fixed &		operator=( Fixed const & rhs );

	private:

		int	_rawBits;
		static int const	_fractRawBits = 8;

};


#endif /* *********************************************************** FIXED_H */
