#ifndef LITTERAL_HPP
# define LITTERAL_HPP

# include <iostream>
# include <locale>
# include <climits>
# include <cmath>
# include <iomanip>

# define NONDISPLAYABLECHAR 1<<0
# define IMPOSSIBLECHAR 1<<1
# define IMPOSSIBLEINT 1<<2

enum eType
{
	ERROR,
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	MAX
};

class Litteral
{
	private :

		char	_char;
		float	_float;
		double	_double;
		int		_int;
		unsigned char	_flags;
		enum eType	_type;

	public :
		Litteral();
		Litteral(char *arg);
		Litteral(Litteral const & src);
		~Litteral();

		bool	isInt(char *arg);
		bool	isFloat(char *arg);
		bool	isDouble(char *arg);
		bool	isChar(char *arg);
		void	setFlags(void);
		void	print();
		
		Litteral &	operator=(Litteral const & rhs);
};

#endif