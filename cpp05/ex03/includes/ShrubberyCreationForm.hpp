#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
private:

		std::string	_target;

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm();

	virtual void	execute(Bureaucrat const & executor) const;

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

};


#endif