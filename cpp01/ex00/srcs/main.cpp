/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:20:09 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/29 10:25:50 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie* zombie1;
	Zombie* zombie2;
	zombie1 =  newZombie("Shawn");
	zombie2 =  newZombie("Rick");
	randomChump("Carl");
	randomChump("Negan");
	randomChump("Michonne");
	delete zombie1;
	delete zombie2;
}
