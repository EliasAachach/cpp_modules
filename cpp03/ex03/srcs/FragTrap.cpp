#include "FragTrap.hpp"

/*
* 			CONSTRUCTOR
*/
FragTrap::FragTrap() : ClapTrap()
{
	std::cout	<<	"FragTrap default constructor called !" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout	<<	"FragTrap name constructor called !" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called !" << std::endl;

}

/*
* 			DESTRUCTOR
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

/*
* 			OVERLOAD
*/

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
* 			METHOD
*/

void	FragTrap::attack(const std::string & target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " doesn't have enough hit points to attack." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " doesn't have enough energy points to attack." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " attacks "
				<< target << ", causing " << this->_attackDamage
				<< " points of damage!" << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "Let's high five, guys !" << std::endl;
}