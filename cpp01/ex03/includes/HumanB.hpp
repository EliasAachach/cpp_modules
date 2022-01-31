/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:58:44 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/31 14:23:48 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include "Weapon.hpp"

class HumanB
{
private:

		std::string	_name;
		Weapon	*_weapon;

public:

		void	attack();
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB();
};



#endif
