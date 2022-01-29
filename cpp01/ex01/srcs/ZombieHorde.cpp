/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 09:32:59 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/29 10:58:27 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	ZombieHorde(int N, std::string name)
{
	Zombie *nZ = new Zombie[N];
	for (int i = 0; i < N; i++)
		nZ[i].setName(name);
	return (nZ);
}