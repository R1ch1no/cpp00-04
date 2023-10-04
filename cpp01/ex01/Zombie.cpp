/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:43:28 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/04 09:53:15 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void    Zombie::nameAnyZombie(std::string str)
{
    name = str;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": was put back to heapGrave" << std::endl;
}