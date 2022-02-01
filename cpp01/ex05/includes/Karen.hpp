/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:41:47 by elaachac          #+#    #+#             */
/*   Updated: 2022/02/01 15:54:06 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen
{
private:

		void debug();
		void info();
		void warning();
		void error();
		std::string	_levels[4];
public:

		void	complain(std::string level);
		Karen();
		~Karen();
};
