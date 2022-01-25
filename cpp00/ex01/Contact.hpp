/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:15:06 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/25 17:08:05 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

enum Suit { FirstName = 0, LastName, Nickname, Phone, Secret };

class Contact
{
private:
	std::string ContactInfos[5];
public:
	Contact();
	~Contact();
	void	SetValue(std::string);
	std::string GetValue(void);
};


#endif
