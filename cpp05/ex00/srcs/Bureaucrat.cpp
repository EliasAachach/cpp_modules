#include "Bureaucrat.hpp"

/*
* 			CONSTRUCTOR
*/

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName())
{
	*this = src;
}

/*
* 			DESTRUCTOR
*/

Bureaucrat::~Bureaucrat()
{
}

/*
* 			OVERLOAD
*/

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream	& operator<<(std::ostream &flux, const Bureaucrat &src)
{
	flux << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (flux);
}

/*
* 			METHOD
*/

void	Bureaucrat::incrGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade++;
}

void	Bureaucrat::decrGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade--;
}

/*
* 			ACCESSORS
*/

std::string	const Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}
