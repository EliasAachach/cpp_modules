/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:20:09 by elaachac          #+#    #+#             */
/*   Updated: 2022/02/04 14:19:58 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde( int N, std::string name );

int main (void)
{
	Zombie *zombies;
	int N = 893;
	zombies = ZombieHorde(N, "Yves");
	for (int i = 0; i < N; i++)
		zombies->announce();
	delete [] zombies;
}