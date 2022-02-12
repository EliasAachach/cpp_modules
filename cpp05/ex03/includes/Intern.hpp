#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include <iostream>

class Intern
{
private:

public:
	Intern();
	Intern(const Intern & src);
	~Intern();

	AForm *makeForm(std::string formName, std::string target);

	Intern	& operator=(const Intern & rhs);

	class WrongNameException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Could not create the form. There's no form named like that.");
			}
	};
};

#endif