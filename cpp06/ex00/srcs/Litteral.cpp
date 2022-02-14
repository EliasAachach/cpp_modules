#include "Litteral.hpp"

/*
* 			CONSTRUCTOR
*/

Litteral::Litteral()
{
}

Litteral::Litteral(char *arg)
{
	if (this->isChar(arg) == false && this->isDouble(arg) == false &&
		this->isFloat(arg) == false && this->isInt(arg) == false)
		this->_type = ERROR;
	switch (this->_type)
	{
		case CHAR :
		{
			char c = this->_char;
			this->_int = static_cast<int>(c);
			this->_double = static_cast<double>(c);
			this->_float = static_cast<float>(c);
			break;
		}
		case INT :
		{
			int i = this->_int;
			this->_char = static_cast<char>(i);
			this->_double = static_cast<double>(i);
			this->_float = static_cast<float>(i);
			break;
		}
		case DOUBLE :
		{
			double d = this->_double;
			this->_char = static_cast<char>(d);
			this->_int = static_cast<int>(d);
			this->_float = static_cast<float>(d);
			break;
		}
		case FLOAT :
		{
			float f = this->_float;
			this->_char = static_cast<char>(f);
			this->_double = static_cast<double>(f);
			this->_int = static_cast<int>(f);
			break;
		}
		
		default:
		{
			this->_flags |= IMPOSSIBLEINT | IMPOSSIBLECHAR;
			this->_float = NAN;
			this->_double = NAN;
			break;
		}
	}
	this->setFlags();
}

/*
* 			DESTRUCTOR
*/

Litteral::~Litteral()
{
}

/*
* 			OVERLOAD
*/


/*
* 			METHOD
*/

bool	Litteral::isChar(char *arg)
{
	char c = arg[0];
	if (arg[1] != '\0' || std::isprint(c) == false)
		return(false);
	this->_char = c;
	this->_type = CHAR;
	return (true);
}

bool	Litteral::isFloat(char *arg)
{
	char *afterDigit = NULL;
	float ret = strtof(arg, &afterDigit);

	if (*afterDigit != 'f' || *(afterDigit + 1) != '\0' || afterDigit - arg <= 0)
		return(false);
	this->_type = FLOAT;
	this->_float = ret;
	return (true);
}

bool	Litteral::isDouble(char *arg)
{
	char *afterDigit = NULL;
	double ret = strtod(arg, &afterDigit);

	if (*afterDigit != '\0')
		return(false);
	this->_type = DOUBLE;
	this->_double = ret;
	return (true);
}

bool	Litteral::isInt(char *arg)
{
	char *afterDigit = NULL;
	long int ret = strtol(arg, &afterDigit, 10);
	if (*afterDigit != '\0' || ret < INT_MIN || ret > INT_MAX)
		return (false);
	this->_type = INT;
	this->_int = static_cast<int>(ret);
	return (true);
}

void	Litteral::setFlags(void)
{
	double d = this->_double;

	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX)
		|| std::isnan(d) == true || std::isinf(d) == true)
		this->_flags |= IMPOSSIBLEINT | IMPOSSIBLECHAR;
	else if (d < CHAR_MIN || d > CHAR_MAX)
		this->_flags |= IMPOSSIBLECHAR;
	else if (std::isprint(this->_char) == false)
		this->_flags |= NONDISPLAYABLECHAR;
}

static void	print_char(char const c, unsigned int const flags) {

	std::cout << "char: ";
	if (flags & IMPOSSIBLECHAR)
		std::cout << "impossible";
	else if (flags & NONDISPLAYABLECHAR)
		std::cout << "Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << std::endl;
}

static void	print_int(int const n, unsigned int const flags)
{
	std::cout << "int: ";
	if (flags & IMPOSSIBLEINT)
		std::cout << "impossible";
	else
		std::cout << n;
	std::cout << std::endl;
}

void	Litteral::print()
{
	std::cout << std::fixed << std::setprecision(1);
	print_char(this->_char, this->_flags);
	print_int(this->_int, this->_flags);
	std::cout << "float: " << this->_float << "f" << std::endl;
	std::cout << "double: " << this->_double << std::endl;
}

/*
* 			ACCESSORS
*/