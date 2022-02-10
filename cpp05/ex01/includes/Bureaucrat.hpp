#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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

	private :

		std::string const	_name;
		int		_grade;

};
	
	std::ostream & operator<<(std::ostream &flux, Bureaucrat const &rhs);

#endif