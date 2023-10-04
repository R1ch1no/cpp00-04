/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:13:59 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/04 15:30:36 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string str)
{
	this->type = str;
	std::cout << "Weapon of type : " << str << " got created" << std::endl;
}
Weapon::~Weapon()
{
	std::cout << "Weapon destrooooyed" << std::endl;
}
const std::string &Weapon::getType(void)
{
	return ((std::string &)this->type);
}
void Weapon::setType(std::string typ)
{
	this->type = typ;
}
