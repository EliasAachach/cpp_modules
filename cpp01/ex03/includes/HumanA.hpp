/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:58:32 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/31 13:38:53 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:

		std::string	_name;
		Weapon	&_weapon;

public:

		void	attack();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};



#endif
