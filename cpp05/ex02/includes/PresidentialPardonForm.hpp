#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:

		std::string	_target;

public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string const target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm();

	virtual void	execute(Bureaucrat const & executor) const;

	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

};


#endif