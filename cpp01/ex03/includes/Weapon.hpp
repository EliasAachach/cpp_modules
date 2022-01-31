/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:45:43 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/31 14:15:39 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:

	std::string _type;

public:

	void				setType(std::string type);
	std::string const	&getType(void) const;
	Weapon(std::string type);
	~Weapon();
};

#endif
