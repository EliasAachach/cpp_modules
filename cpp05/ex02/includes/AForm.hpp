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

		virtual void	execute(Bureaucrat const & executor) const = 0;
		void	beSigned(Bureaucrat const & bureaucrat);

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
		class NotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("not signed.");
				}
		};
		class ExecutorGradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return (" : executor's grade is too low to execute ");
				}
		};
};

std::ostream	& operator<<(std::ostream &flux, const AForm &src);

#endif