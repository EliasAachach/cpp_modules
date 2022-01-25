/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:57:01 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/25 17:02:07 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main (int argc)
{
	std::string line;
	bool exit = false;

	if (argc > 1)
		std::cout << " Error : Phonebook doesn't need any argument." << std::endl;
	while (exit = false)
	{
		std::cout << "Enter a command : {ADD, SEARCH, EXIT}" << std::endl;
		std::cout << "command : ";
		std::getline(std::cin, line);
		if (!line.empty())
		{
			if (line.compare("EXIT"))
				exit = true;
			else if (line.compare("ADD"))
			{
				// Phonebook.FCTADD
			}
			else if (line.compare("SEARCH"))
			{
				// Phonebook.FCTSEARCH
			}
		}
	}
}