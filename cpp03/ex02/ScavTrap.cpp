/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:31:16 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/11 14:11:32 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//-----------------Default-----------------------//

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
    std::cout << "ScavTrap default constructor with no name called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name, 100, 50, 20)
{
    std::cout << "ScavTrap default constructor with name called" << std::endl;
}

ScavTrap::ScavTrap(std::string name, int hp, int ep, int ad)
:ClapTrap(name, hp, ep, ad)
{
    std::cout << "ScavTrap constructor with all params called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    std::cout << "ScavTrap copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

//-----------------Exercise-----------------------//

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode ";
}