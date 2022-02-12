#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm *CreateRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm *CreateShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *CreatePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

/*
* 			CONSTRUCTOR
*/

Intern::Intern()
{
}

Intern::Intern(const Intern & src)
{
	*this = src;
}

/*
* 			DESTRUCTOR
*/

Intern::~Intern()
{
}

/*
* 			OVERLOAD
*/

Intern	&	Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	return (*this);
}

/*
* 			METHOD
*/

AForm	*Intern::makeForm(std::string formName, std::string target)
{
    std::string tab[3] =
	{
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};
    AForm *(*forms[3])(std::string) =
	{
		&CreateRobotomyRequestForm,
		&CreatePresidentialPardonForm,
		&CreateShrubberyCreationForm
	};
        
    int i = 0;
    while (i < 3)
    {
        if (tab[i].compare(formName) == 0)
        {
            std::cout << "Intern created " << formName << " form"<< std::endl;
            return (forms[i](target));
        }
        i++;
    }
    throw Intern::WrongNameException();
}

/*
* 			ACCESSORS
*/