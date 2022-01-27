/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:31:23 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/26 17:35:25 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact()
{	
}

const std::string	infos[5] =
{
	"First name", 
	"Last name", 
	"Nickname", 
	"Phone number", 
	"Darkest secret"
};

void Contact::setInfo(std::string info[5])
{
	for (int i = 0; i < 5; i++)
		this->_contactInfos[i] = info[i];
}

void Contact::displayContact()
{
	for (int i = 0; i < 5; i++)
		std::cout << infos[i] << " : " << this->_contactInfos[i] << std::endl;
}

void	goodFormat(std::string word)
{
	std::string	str(10, ' ');

	if (word.length() > 10)
	{
		str = word.substr(0, 10);
		str[9] = '.';
	}
	else
		str = word.substr(0, word.length());
	std::cout << std::setfill(' ') << std::setw(16);
	std::cout << str;
	std::cout << std::setfill(' ') << std::setw(6);
	std::cout << "|";
}

void Contact::print_head(int i)
{
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << i;
	std::cout << std::setfill(' ') << std::setw(5);
	std::cout << "|";
	for (int i = 0; i < 4; i++)
		goodFormat(this->_contactInfos[i]); 
	std::cout << std::endl;
}


Contact::~Contact()
{
}