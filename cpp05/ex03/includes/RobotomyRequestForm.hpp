#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
private:

		std::string	_target;

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string const target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();

	virtual void	execute(Bureaucrat const & executor) const;

	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

};


#endif