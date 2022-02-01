/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:38:20 by elaachac          #+#    #+#             */
/*   Updated: 2022/02/01 13:40:17 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "adress in memory of the string : " << &str << std::endl;
	std::cout << "adress of the string by using stringPTR : " << stringPTR << std::endl;
	std::cout << "adress of the string by using stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "string variable : " << str << std::endl;
	std::cout << "string using the pointer : " << *stringPTR << std::endl;
	std::cout << "string using the reference : " << stringREF <<std::endl;
}
