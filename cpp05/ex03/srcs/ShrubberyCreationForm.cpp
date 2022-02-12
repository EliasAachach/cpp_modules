#include "ShrubberyCreationForm.hpp"

/*
* 			CONSTRUCTOR
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("defaultShrubbery", 145, 137), _target("default_shrubbery")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("shrubberyCreationForm", 145, 137), _target(target + "_shrubbery")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}

/*
* 			DESTRUCTOR
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
* 			OVERLOAD
*/

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

/*
* 			METHOD
*/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw ShrubberyCreationForm::NotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw ShrubberyCreationForm::ExecutorGradeTooLowException();
	else
	{
		std::ofstream	file(this->_target.c_str(), std::ofstream::out);
		if (file.is_open())
		{
			file	<< "                                                    .     " << std::endl
					<< "                                         .         ;      " << std::endl
					<< "            .              .              ;%     ;;       " << std::endl
					<< "              ,           ,                :;%  %;        " << std::endl
					<< "               :         ;                   :;%;'     ., " << std::endl
					<< "      ,.        %;     %;            ;        %;'    ,;   " << std::endl
					<< "        ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl
					<< "         %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl
					<< "          ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl
					<< "           `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl
					<< "            `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl
					<< "               `:%;.  :;bd%;          %;@%;'              " << std::endl
					<< "                 `@%:.  :;%.         ;@@%;'               " << std::endl
					<< "                   `@%.  `;@%.      ;@@%;                 " << std::endl
					<< "                     `@%%. `@%%    ;@@%;                  " << std::endl
					<< "                       ;@%. :@%%  %@@%;                   " << std::endl
					<< "                         %@bd%%%bd%%:;                    " << std::endl
					<< "                           #@%%%%%:;;                     " << std::endl
					<< "                           %@@%%%::;                      " << std::endl
					<< "                           %@@@%(o);  . '                 " << std::endl
					<< "                           %@@@o%;:(.,'                   " << std::endl
					<< "                       `.. %@@@o%::;                      " << std::endl
					<< "                          `)@@@o%::;                      " << std::endl
					<< "                           %@@(o)::;                      " << std::endl
					<< "                          .%@@@@%::;                      " << std::endl
					<< "                          ;%@@@@%::;.                     " << std::endl
					<< "                         ;%@@@@%%:;;;.                    " << std::endl
					<< "                     ...;%@@@@@%%:;;;;,..                 " << std::endl;
			file.close();
		}
	}
}

/*
* 			ACCESSORS
*/