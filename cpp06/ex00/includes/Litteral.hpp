#ifndef LITTERAL_HPP
# define LITTERAL_HPP

# include <locale>
# include <climits>

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

		
		Litteral &	operator=(Litteral const & rhs);
};

#endif