#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:

		std::string	_target;

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string const target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();

	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

};


#endif