/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:15:06 by elaachac          #+#    #+#             */
/*   Updated: 2022/01/26 15:38:51 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>

class Contact
{
private:
	std::string _contactInfos[5];
public:
	Contact();
	~Contact();
	void		setInfo(std::string infos[5]);
	void 		print_head(int i);
	void		displayContact();
	std::string GetValue(void);
};


#endif
