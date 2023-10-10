/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:35:59 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/10 18:14:48 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//-----------------Default-----------------------//

ClapTrap::ClapTrap()
:name(""), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Default contructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
:name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Contructor with a name called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    std::cout << "Copy contructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap() { std::cout << "Destructor called" << std::endl; }

//-----------------Exercise-----------------------//

void ClapTrap::attack(const std::string &target)
{
    if (energy_points >= 1)
    {
        if (hit_points > 0)
        {
            if (this->name.length() != 0)
            std::cout << target << " has taken damage from " << this->name << std::endl;
            else
                std::cout << target << " has taken damage from anonymus"<< std::endl;
        }
        energy_points -= 1;
    }
    else
        std::cout << this->name << " can't do anything anymore. No mana left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > 0)
    {
        this->hit_points -= amount;
        std::cout << "The amount of damage dealt to " << this->name << " is : " << amount << std::endl;
        if (this->hit_points <= 3 && this->hit_points > 0)
            std::cout << this->name << "’s state is critical" << std::endl;
        if (this->hit_points == 0)
            std::cout << this->name << " is done, not HP left!" << std::endl;
        if (this->hit_points < 0)
            std::cout << this->name << " was awfully slaughtered " << std::endl;
    }
    else
        std::cout << this->name << " is done, not HP left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points >= 1)
    {
        energy_points -= 1;
        if (amount == 0 || amount == 1)
            std::cout << this->name << "'s HP was restored by amount of : " << amount << " point" << std::endl;
        else
            std::cout << this->name << "'s HP was restored by amount of : " << amount << " points" << std::endl;
        this->hit_points += amount;
    }
    else
        std::cout << this->name << " can't do anything anymore. No mana left!" << std::endl;
}