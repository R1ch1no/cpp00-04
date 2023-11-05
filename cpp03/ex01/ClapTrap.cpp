/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:35:59 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:43:21 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//-----------------Default-----------------------//

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Claptrap : default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    std::cout << "Claptrap : copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << "Claptrap : copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap : destructor called" << std::endl; }

//-----------------Exercise-----------------------//

void ClapTrap::attack(const std::string &target)
{
    if (this->energy_points >= 1)
    {
        if (hit_points > 0)
        {
            if (this->name.length() != 0)
                std::cout << "Claptrap : "  << target << " has taken damage from " << this->name << std::endl;
            else
                std::cout << "Claptrap : "  << target << " has taken damage from anonymus" << std::endl;
            this->energy_points -= 1;
        }
        else
        {
            if (this->name.length() != 0)
                std::cout << "Claptrap : " << this->name << " can't attack, they died!" << std::endl;
            else
                std::cout << "Claptrap : Anonymus can't attack, they died!" << std::endl;
        }
    }
    else
    {
        if (this->name.length() != 0)
            std::cout << "Claptrap : " << this->name << " can't do anything anymore. No mana left!" << std::endl;
        else
            std::cout << "Claptrap : Anonymus can't do anything anymore. No mana left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > 0)
    {
        if (this->name.length() != 0)
        {
            this->hit_points -= amount;
            std::cout << "Claptrap : " << "The amount of damage dealt to " << this->name << " is : " << amount << std::endl;
            std::cout << "Claptrap : " << "HP left after the attack : " << this->hit_points << std::endl;
            if (this->hit_points <= 3 && this->hit_points > 0)
                std::cout << "Claptrap : " << this->name << "’s state is critical" << std::endl;
            if (this->hit_points == 0)
                std::cout << "Claptrap : " << this->name << " is done, not HP left!" << std::endl;
            if (this->hit_points < 0)
                std::cout << "Claptrap : " << this->name << " was awfully slaughtered " << std::endl;
        }
        else
        {
            this->hit_points -= amount;
            std::cout << "Claptrap : The amount of damage dealt to anonymus is : " << amount << std::endl;
            if (this->hit_points <= 3 && this->hit_points > 0)
                std::cout << "Claptrap : Anonymus’s state is critical" << std::endl;
            if (this->hit_points == 0)
                std::cout << "Claptrap : Anonymus is done, not HP left!" << std::endl;
            if (this->hit_points < 0)
                std::cout << "Claptrap : Anonymus was awfully slaughtered " << std::endl;
        }
    }
    else
    {
        if (this->name.length() != 0)
            std::cout << "Claptrap : " << this->name << " can't be attacked, they died!" << std::endl;
        else
            std::cout << "Claptrap : Anonymus can't be attacked, they died!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points <= 0)
    {
        if (this->name.length() != 0)
            std::cout << "Claptrap : " << this->name << " can't do anything anymore. They died" << std::endl;
        else
            std::cout << "Claptrap : Anonymus can't do anything anymore. They died!" << std::endl;
        return ;
    }
    if (this->energy_points >= 1)
    {
        this->energy_points -= 1;
        if (amount == 0 || amount == 1)
        {
            if (this->name.length() != 0)
                std::cout << "Claptrap : " << this->name << "'s HP was restored by amount of : " << amount << " point" << std::endl;
            else
                std::cout << "Claptrap : Anonymus's HP was restored by amount of : " << amount << " point" << std::endl;
        }
        else
        {
            if (this->name.length() != 0)
                std::cout << "Claptrap : " << this->name << "'s HP was restored by amount of : " << amount << " points" << std::endl;
            else
                std::cout << "Claptrap : Anonymus's HP was restored by amount of : " << amount << " points" << std::endl;
        }
        this->hit_points += amount;
    }
    else
    {
        if (this->name.length() != 0)
            std::cout << "Claptrap : " << this->name << " can't do anything anymore. No mana left!" << std::endl;
        else
            std::cout << "Claptrap : Anonymus can't do anything anymore. No mana left!" << std::endl;
    }
}

std::string ClapTrap::getName(void) const{return (this->name);}
int ClapTrap::getHP(void) const{return (this->hit_points);}
int ClapTrap::getEP(void) const {return (this->energy_points);}
int ClapTrap::getAD(void) const {return (this->attack_damage);}

void ClapTrap::print_data(void) const
{
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Name:           " << this->name << std::endl;
    std::cout << "Hit points:     " << this->hit_points << std::endl;
    std::cout << "Energy points:  " << this->energy_points << std::endl;
    std::cout << "Attack damage:  " << this->attack_damage << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
}
