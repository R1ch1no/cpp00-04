/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookAccessors.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:49:49 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/03 01:51:50 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ex01.hpp"
#include "PhoneBook.class.hpp"

void Phonebook::save_data(int y, int i, std::string str)
{
	if (i == 0)
		contact[y].saveFN(str);
	if (i == 1)
		contact[y].saveLN(str);
	if (i == 2)
		contact[y].saveNN(str);
	if (i == 3)
		contact[y].savePN(str);
	if (i == 4)
		contact[y].saveDS(str);
}

std::string Phonebook::get_data(int y, int i)
{
	if (i == 0)
		return (contact[y].giveFN());
	if (i == 1)
		return (contact[y].giveLN());
	if (i == 2)
		return (contact[y].giveNN());
	if (i == 3)
		return (contact[y].givePN());
	if (i == 4)
		return (contact[y].giveDS());
	return ("");
}

Phonebook::Phonebook ()
{
}

Phonebook::~Phonebook()
{
}