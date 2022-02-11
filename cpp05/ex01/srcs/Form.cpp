#include "Form.hpp"


/*
* 			CONSTRUCTOR
*/

Form::Form() : _name("default"), _isSigned(false), _signGrade(150), _execGrade(150)
{
}

Form::Form(std::string const name, int const signGrade, int const execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_signGrade > 150 || this->_execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	*this = src;
}

/*
* 			DESTRUCTOR
*/

Form::~Form()
{
}

/*
* 			OVERLOAD
*/

Form &	Form::operator=(Form const & rhs)
{
	this->_isSigned = rhs._isSigned;
	return (*this);
}

/*
* 			METHOD
*/

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}


std::ostream	& operator<<(std::ostream &flux, const Form &src)
{
	flux	<< src.getName() << ", form grade " << src.getsignGrade() << ", needed grade "
			<< src.getexecGrade() << std::endl;
	return (flux);
}

/*
* 			ACCESSORS
*/

std::string	const	Form::getName() const
{
	return(this->_name);
}

int	Form::getsignGrade() const
{
	return (this->_signGrade);
}

int	Form::getexecGrade() const
{
	return (this->_execGrade);
}

bool	Form::getIsSigned() const
{
	return(this->_isSigned);
}