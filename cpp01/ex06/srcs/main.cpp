/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:41:54 by elaachac          #+#    #+#             */
/*   Updated: 2022/02/02 12:05:28 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int	getLevel(std::string str)
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (str == levels[i])
			return (i);
	}
	return (4);
}

int main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		std::cout << "Karen is angry, but she's dumb, you need to tell her what to say. one thing at a time."
				<< std::endl;
				return (0);
	}
	switch(getLevel(argv[1]))
	{
		case 0	:
			std::cout << "[DEBUG]" << std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
			__attribute__((fallthrough));
		case 1	:
			std::cout << "[INFO]" << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
			__attribute__((fallthrough));
		case 2	:
			std::cout << "[WARNING]" << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
			__attribute__((fallthrough));
		case 3	:
			std::cout << "[ERROR]" << std::endl;
			karen.complain("ERROR");
			break;
		default	:
			std::cout << "Wait, what are doing ?!" << std::endl;
			karen.complain("FAINT");
			break;
	}
	return (0);
}