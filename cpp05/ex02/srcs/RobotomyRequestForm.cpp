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

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw RobotomyRequestForm::NotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw RobotomyRequestForm::ExecutorGradeTooLowException();
	else
	{
		std::cout << "Brrrrrrrrrrrrrr" << std::endl;
		std::srand(std::time(NULL));
		if (rand() % 2)
			std::cout << this->_target << " has been robotimized." << std::endl;
		else
			std::cout << "The operation failed" << std::endl;	
	}
}

/*
* 			ACCESSORS
*/