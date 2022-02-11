#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :

		std::string const	_name;
		bool				_isSigned;
		int	const			_signGrade;
		int	const			_execGrade;

	public :

		Form();
		Form(std::string const name, int const signGrade, int const execGrade);
		Form(Form const & src);
		~Form();

		Form	& operator=(Form const & rhs);

		std::string	const	getName() const;
		int					getsignGrade() const;
		int					getexecGrade() const;
		bool				getIsSigned() const;

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

};

std::ostream	& operator<<(std::ostream &flux, const Form &src);

#endif