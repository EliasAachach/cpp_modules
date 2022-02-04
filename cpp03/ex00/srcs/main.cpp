#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("clap1");

    std::cout<<std::endl;
	clap.takeDamage(20);
	clap.attack("clap1");
    std::cout<<std::endl;
	ClapTrap	copy(clap);
	copy.attack("clapCopy");
    std::cout<<std::endl;
}