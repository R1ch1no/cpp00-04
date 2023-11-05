/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:31:16 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:44:26 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//-----------------Default-----------------------//

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap : default constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
    std::cout << "ScavTrap : copy constructor called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    std::cout << "ScavTrap : copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : destructor called" << std::endl;
}

//-----------------Exercise-----------------------//

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap : ScavTrap is now in Gate keeper mode ";
}

void ScavTrap::attack(std::string const &target)
{
    if (this->energy_points >= 1)
    {
        if (this->hit_points > 0)
        {
            if (this->name.length() != 0)
                std::cout << "ScavTrap : " << target << " has taken damage from " << this->name << std::endl;
            else
                std::cout << "ScavTrap : " << target << " has taken damage from anonymus" << std::endl;
        this->energy_points -= 1;
        }
    }
    else
    {
        if (this->name.length() != 0)
            std::cout << "ScavTrap : " << this->name << " can't do anything anymore. No mana left!" << std::endl;
        else
            std::cout << "ScavTrap : " << "Anonymus can't do anything anymore. No mana left!" << std::endl;
    }
}
