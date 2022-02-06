#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Eren");
	ScavTrap scav("Titan");
	std::cout << std::endl;
	scav.guardGate();
	std::cout << std::endl;
	clap.attack("Eren");
	scav.attack("Eren");
	std::cout << std::endl;
	scav.beRepaired(2);
	clap.beRepaired(1);
	std::cout << std::endl;
}