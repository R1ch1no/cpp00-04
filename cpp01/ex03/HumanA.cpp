/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:18:04 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/04 15:26:00 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
HumanA::HumanA(std::string str, Weapon &gun) : name(str), weapon(gun)
{
	std::cout << this->name << " got created with : " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->name << " got destroyyyed" << std::endl;
}