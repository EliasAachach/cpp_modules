#include "AForm.hpp"


/*
* 			CONSTRUCTOR
*/

AForm::AForm() : _name("default"), _isSigned(false), _signGrade(150), _execGrade(150)
{
}

AForm::AForm(std::string const name, int const signGrade, int const execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (this->_signGrade > 150 || this->_execGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & src) : _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	*this = src;
}

/*
* 			DESTRUCTOR
*/

AForm::~AForm()
{
}

/*
* 			OVERLOAD
*/

AForm &	AForm::operator=(AForm const & rhs)
{
	this->_isSigned = rhs._isSigned;
	return (*this);
}

/*
* 			METHOD
*/

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_execGrade)
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
}


std::ostream	& operator<<(std::ostream &flux, const AForm &src)
{
	flux	<< src.getName() << ", form grade " << src.getSignGrade() << ", needed grade "
			<< src.getExecGrade() << std::endl;
	return (flux);
}

/*
* 			ACCESSORS
*/

std::string	const	AForm::getName() const
{
	return(this->_name);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExecGrade() const
{
	return (this->_execGrade);
}

bool	AForm::getIsSigned() const
{
	return(this->_isSigned);
}