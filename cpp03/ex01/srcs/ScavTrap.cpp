#include "ScavTrap.hpp"

/*
* 			CONSTRUCTOR
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

/*
* 			DESTRUCTOR
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

/*
* 			OVERLOAD
*/
ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return (*this);
}


/*
* 			METHOD
*/

void	ScavTrap::attack(const std::string & target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " doesn't have enough hit points to attack." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " doesn't have enough energy points to attack." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks "
				<< target << ", causing " << this->_attackDamage
				<< " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() const
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " doesn't have enough hit points to guard the gate." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is guarding the gate." << std::endl;
}