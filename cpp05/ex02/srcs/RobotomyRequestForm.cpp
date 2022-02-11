#include "RobotomyRequestForm.hpp"

/*
* 			CONSTRUCTOR
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("defaultRobotomy", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("robotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
}

/*
* 			DESTRUCTOR
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
* 			OVERLOAD
*/

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
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