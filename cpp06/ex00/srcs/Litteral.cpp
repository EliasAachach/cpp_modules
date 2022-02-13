#include "Litteral.hpp"

/*
* 			CONSTRUCTOR
*/

Litteral::Litteral()
{
}

Litteral::Litteral(char *arg)
{
	if (this->isChar(arg) == false || this->isDouble(arg) == false ||
		this->isFloat(arg) == false || this->isInt(arg) == false)
		this->_type = ERROR;
	switch (this->_type)
	{
		case CHAR :
		{
			char c = this->_char;
			static_cast<int>(c);
			static_cast<double>(c);
			static_cast<float>(c);
			break;
		}
		case INT :
		{
			int i = this->_int;
			static_cast<char>(i);
			static_cast<double>(i);
			static_cast<float>(i);
			break;
		}
		case DOUBLE :
		{
			double d = this->_double;
			static_cast<char>(d);
			static_cast<int>(d);
			static_cast<float>(d);
			break;
		}
		case FLOAT :
		{
			float f = this->_float;
			static_cast<char>(f);
			static_cast<double>(f);
			static_cast<int>(f);
			break;
		}
		
		default:
		{
			break;
		}
	}
}

/*
* 			DESTRUCTOR
*/


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

/*
* 			ACCESSORS
*/