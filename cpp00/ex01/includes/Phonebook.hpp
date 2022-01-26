/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:56:59 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/26 16:27:11 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cstring>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact _contact[8];
	static int		_nbrContact;
public:
	Phonebook();
    bool	is_index(std::string input);
	void	addContact();
	void	searchContact();
	~Phonebook();
};

#endif