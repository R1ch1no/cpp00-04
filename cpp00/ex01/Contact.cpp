/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:14:54 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/03 13:12:01 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Ex01.hpp"

void Contact::saveFN(std::string str)
{
	FirstName = str;
}

void Contact::saveLN(std::string str)
{
	LastName = str;
}

void Contact::saveNN(std::string str)
{
	Nickname = str;
}

void Contact::savePN(std::string str)
{
	PhoneNumber = str;
}

void Contact::saveDS(std::string str)
{
	DarkestSecret = str;
}

std::string Contact::giveFN()
{
	return (FirstName);
}

std::string Contact::giveLN()
{
	return (LastName);
}

std::string Contact::giveNN()
{
	return (Nickname);
}

std::string Contact::givePN()
{
	return (PhoneNumber);
}

std::string Contact::giveDS()
{
	return (DarkestSecret);
}

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}