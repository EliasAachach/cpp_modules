#include "ShrubberyCreationForm.hpp"

/*
* 			CONSTRUCTOR
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("defaultShrubbery", 145, 137), _target("default_shrubbery")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("shrubberyCreationForm", 145, 137), _target(target + "_shrubbery")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}

/*
* 			DESTRUCTOR
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
* 			OVERLOAD
*/

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

/*
* 			METHOD
*/


/*
* 			ACCESSORS
*/