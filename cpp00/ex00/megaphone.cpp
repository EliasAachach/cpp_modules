/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:05:55 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/25 14:38:15 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" 	<< std::endl;
	else
	{
		while(argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char)toupper((int)argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout <<  std::endl;
	}
	return (0);
}
