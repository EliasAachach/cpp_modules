/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:53:26 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/26 17:09:22 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"

int	Phonebook::_nbrContact = 0;

const std::string	infos[5] =
{
	"First name", 
	"Last name", 
	"Nickname", 
	"Phone number", 
	"Darkest secret"
};

Phonebook::Phonebook()
{
}

void	Phonebook::addContact(void)
{
	std::string infoContact[5];
	std::string input;
	int			i = -1;

	if (this->_nbrContact < 8)
	{
		std::cout << "Add a new contact" << std::endl;
		while (++i < 5)
		{
			std::cout << infos[i] << " : ";
			std::getline(std::cin, infoContact[i]);
			if (std::cin.eof())
			{
				std::cout << std::endl << "Ouch! Don't do that." << std::endl;
				exit(0);
			}
			else if (infoContact[i].empty() == true)
			{
				std::cout << "Empty line, replaced by \"None\"." << std::endl;
				infoContact[i] = "None";
			}
		}
		this->_contact[_nbrContact].setInfo(infoContact);
		this->_nbrContact++;
		std::cout << "New contact added successfully" << std::endl;
	}
	else
		std::cout << "Contact list is full !" << std::endl;

}

void	draw_line(int lengh)
{
	std::cout << "#";
	std::cout << std::setfill('-') << std::setw(lengh);
  	std::cout << "#" << std::endl;
}

void	print_head(void)
{
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "index";
	std::cout << std::setfill(' ') << std::setw(5);
	std::cout << "|";
	for (int i = 0; i < 4; i++)
	{
		std::cout << std::setfill(' ') << std::setw(16);
		std::cout << infos[i];
		std::cout << std::setfill(' ') << std::setw(6);
		std::cout << "|";
	}
  	std::cout <<  std::endl;
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	nb;

	sign = 1;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		if (nb < 0 && sign == 1)
			return (-1);
		else if (nb < 0 && sign == -1)
			return (0);
		str++;
	}
	return ((int)nb * sign);
}

bool	is_nb(std::string nb)
{
	int i = 0;
	while (nb[i])
	{
		if (!isdigit(nb[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	Phonebook::is_index(std::string input)
{
	int	tmp = ft_atoi(input.c_str());
	
	if (!is_nb(input))
		return false;
	return (tmp >= 0 && tmp < this->_nbrContact);
}

void	Phonebook::searchContact(void)
{
	int index = 0;
	std::string	input;

	draw_line(103);
	print_head();
	draw_line(103);
	
	if (this->_nbrContact > 0)
	{
		for(int i = 0; i < this->_nbrContact; i++)
		{
			this->_contact[i].print_head(i);
			draw_line(103);
		}
		std::cout << "Enter the index of the contact of your choice : "; 
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl << "Ouch! Don't do that." << std::endl;
			exit(0);
		}
		if (input.empty() || !is_index(input))
			std::cout << "You need to enter an index between 0 and " << this->_nbrContact - 1;
		else
		{
			index = ft_atoi(input.c_str());
			this->_contact[index].displayContact();
		}
		std::cout << std::endl;
	}
	else
		std::cout << "You don't have any contact (Yet !!). Use \"ADD\" to create your first contact." << std::endl;
}

Phonebook::~Phonebook()
{
}
