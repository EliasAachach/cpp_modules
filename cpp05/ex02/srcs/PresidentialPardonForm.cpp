#include "PresidentialPardonForm.hpp"

/*
* 			CONSTRUCTOR
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("defaultPresidential", 25, 5), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm("presidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	*this = src;
}

/*
* 			DESTRUCTOR
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
* 			OVERLOAD
*/

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
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