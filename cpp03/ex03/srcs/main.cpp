#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap clap("Eren");
	DiamondTrap diamond("Titan");
	std::cout << std::endl;
	diamond.highFiveGuys();
	diamond.guardGate();
	std::cout << std::endl;
	clap.attack("Eren");
	diamond.attack("Eren");
	std::cout << std::endl;
	diamond.beRepaired(2);
	clap.beRepaired(1);
	std::cout << std::endl;
}