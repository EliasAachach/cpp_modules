/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:54:11 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/31 15:40:23 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments. Sed needs 3 arguments." << std::endl;
		return (0);
	}
	std::ifstream	infile(argv[1]);
	std::ofstream	outfile(argv[1] + ".replace");
}
