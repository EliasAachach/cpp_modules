/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:57:01 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/26 14:20:49 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"

int main (int argc, char **argv)
{
	(void)argv;
	Phonebook	Phonebook;
	std::string line;
	bool exit = false;

	if (argc > 1)
		std::cout << " Error : Phonebook doesn't need any argument." << std::endl;
	do
	{
		std::cout << "Enter a command : {ADD, SEARCH, EXIT}" << std::endl;
		std::cout << "command : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			return (0);
		if (!line.empty())
		{
			if (line.compare("EXIT") == 0)
				exit = true;
			else if (line.compare("ADD") == 0)
			{
				Phonebook.addContact();
			}
			else if (line.compare("SEARCH") == 0)
			{
				Phonebook.searchContact();
			}
		}
	}while (exit == false);
}