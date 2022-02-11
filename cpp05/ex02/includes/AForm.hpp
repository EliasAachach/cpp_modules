#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private :

		std::string const	_name;
		bool				_isSigned;
		int	const			_signGrade;
		int	const			_execGrade;

	public :

		AForm();
		AForm(std::string const name, int const signGrade, int const execGrade);
		AForm(AForm const & src);
		~AForm();

		AForm	& operator=(AForm const & rhs);

		std::string	const	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				getIsSigned() const;

		virtual void	beSigned(Bureaucrat const & bureaucrat) = 0;

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade too high.");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade too low.");
				}
		};

};

std::ostream	& operator<<(std::ostream &flux, const AForm &src);

#endif