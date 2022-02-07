#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :

	DiamondTrap();
	DiamondTrap(DiamondTrap const & src);
	DiamondTrap(std::string name);
	~DiamondTrap();

	DiamondTrap & operator=(DiamondTrap const & rhs);

	void	attack(std::string const & target);
	void	whoAmI();

	private :
		std::string	_name;
};
#endif