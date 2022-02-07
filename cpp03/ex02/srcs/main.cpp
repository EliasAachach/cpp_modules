#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clap("Eren");
	FragTrap frag("Titan");
	std::cout << std::endl;
	frag.highFiveGuys();
	std::cout << std::endl;
	clap.attack("Eren");
	frag.attack("Eren");
	std::cout << std::endl;
	frag.beRepaired(2);
	clap.beRepaired(1);
	std::cout << std::endl;
}