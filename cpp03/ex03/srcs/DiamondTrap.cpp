#include "DiamondTrap.hpp"

/*
* 			CONSTRUCTOR
*/

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->DiamondTrap::_name = "default";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap name constructor called." << std::endl;
	this->DiamondTrap::_name = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = src;
}

/*
* 			DESTRUCTOR
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

/*
* 			OVERLOAD
*/

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

/*
* 			METHOD
*/

void	DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout   << "DiamondTrap name : " << this->_name
                << " ClapTrap name : " << this->ClapTrap::getName()
                << " this is weird" << std::endl;
}