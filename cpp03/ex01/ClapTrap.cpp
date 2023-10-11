/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:35:59 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/11 14:58:26 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//-----------------Default-----------------------//

ClapTrap::ClapTrap()
    : name(""), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap constructor with a name called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad)
:name(name), hit_points(hp), energy_points(ep), attack_damage(ad)
{
    std::cout << "ClapTrap constructor with all params called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << "ClapTrap copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap destructor called" << std::endl; }

//-----------------Exercise-----------------------//

void ClapTrap::attack(const std::string &target)
{
    if (this->energy_points >= 1)
    {
        if (hit_points > 0)
        {
            if (this->name.length() != 0)
                std::cout << target << " has taken damage from " << this->getName() << std::endl;
            else
                std::cout << target << " has taken damage from anonymus" << std::endl;
        }
        this->energy_points -= 1;
    }
    else
    {
        if (this->getName().length() != 0)
            std::cout << this->getName() << " can't do anything anymore. No mana left!" << std::endl;
        else
            std::cout << "Anonymus can't do anything anymore. No mana left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > 0)
    {
        if (this->name.length() != 0)
        {
            this->hit_points -= amount;
            std::cout << "The amount of damage dealt to " << this->getName() << " is : " << amount << std::endl;
            std::cout << "HP left after the attack : " << this->getHP() << std::endl;
            if (this->getHP() <= 3 && this->getHP() > 0)
                std::cout << this->getName() << "’s state is critical" << std::endl;
            if (this->getHP() == 0)
                std::cout << this->getName() << " is done, not HP left!" << std::endl;
            if (this->getHP() < 0)
                std::cout << this->getName() << " was awfully slaughtered " << std::endl;
        }
        else
        {
            this->hit_points -= amount;
            std::cout << "The amount of damage dealt to anonymus is : " << amount << std::endl;
            if (this->getHP() <= 3 && this->getHP() > 0)
                std::cout << "Anonymus’s state is critical" << std::endl;
            if (this->getHP() == 0)
                std::cout << "Anonymus is done, not HP left!" << std::endl;
            if (this->getHP() < 0)
                std::cout << "Anonymus was awfully slaughtered " << std::endl;
        }
    }
    else
    {
        if (this->getName().length() != 0)
            std::cout << this->getName() << " can't be attacked, they died!" << std::endl;
        else
            std::cout << "Anonymus can't be attacked, they died!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getEP() >= 1)
    {
        this->energy_points -= 1;
        if (amount == 0 || amount == 1)
        {
            if (this->getName().length() != 0)
                std::cout << this->getName() << "'s HP was restored by amount of : " << amount << " point" << std::endl;
            else
                std::cout << "Anonymus's HP was restored by amount of : " << amount << " point" << std::endl;
        }
        else
        {
            if (this->getName().length() != 0)
                std::cout << this->getName() << "'s HP was restored by amount of : " << amount << " points" << std::endl;
            else
                std::cout << "Anonymus's HP was restored by amount of : " << amount << " points" << std::endl;
        }
        this->hit_points += amount;
    }
    else
    {
        if (this->getName().length() != 0)
            std::cout << this->getName() << " can't do anything anymore. No mana left!" << std::endl;
        else
            std::cout << "Anonymus can't do anything anymore. No mana left!" << std::endl;
    }
}

std::string ClapTrap::getName(void) const{return (this->name);}
int ClapTrap::getHP(void){return (this->hit_points);}
int ClapTrap::getEP(void){return (this->energy_points);}
int ClapTrap::getAD(void){return (this->attack_damage);}

void ClapTrap::print_data(void)
{
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Name:           " << this->getName() << std::endl;
    std::cout << "Hit points:     " << this->getHP() << std::endl;
    std::cout << "Energy points:  " << this->getEP() << std::endl;
    std::cout << "Attack damage:  " << this->getAD() << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
}