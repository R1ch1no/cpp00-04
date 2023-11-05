/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:26:35 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:39:14 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " is defenceless" << std::endl;
}

void HumanB::setWeapon(Weapon &gun)
{
	this->weapon = &gun;
	std::cout << this->name << " received a weapon : " << this->weapon->getType() << std::endl;
}
HumanB::HumanB(std::string str) : weapon(NULL)
{
	this->name = str;
	std::cout << this->name << " was created with no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << " got destrooooyed" << std::endl;
}
