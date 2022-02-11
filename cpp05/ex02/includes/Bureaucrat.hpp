#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>

class AForm;
class Bureaucrat
{

	public :

		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat & operator=(Bureaucrat const &rhs);

		std::string const	getName() const;
		int			getGrade() const;

		void	incrGrade();
		void	decrGrade();
		void	signForm(Form & form);

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
		class CannotSign :public std::exception
		{
			public : 

			virtual const char *what() const throw()
			{
				return (""); // raison pour laquelle on ne peut pas signer
			}
		};

	private :

		std::string const	_name;
		int		_grade;

};
	
	std::ostream & operator<<(std::ostream &flux, Bureaucrat const &rhs);

#endif