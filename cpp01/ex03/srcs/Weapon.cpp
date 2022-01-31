/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:45:47 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/31 14:23:00 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const	&Weapon::getType(void) const
{
	return(this->_type);
}

Weapon::Weapon(std::string type)
{
	Weapon::setType(type);
}

Weapon::~Weapon()
{
}
