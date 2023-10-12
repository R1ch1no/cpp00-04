/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:52:13 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/12 18:02:00 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//-----------------Default-----------------------//

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap : default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
    std::cout << "FragTrap : copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
    std::cout << "FragTrap : copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = this->energy_points;
        this->attack_damage = other.attack_damage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap : destructor called" << std::endl;
}

//-----------------Exercise-----------------------//

void FragTrap::highFiveGuys(void)
{
    if (this->name.length() != 0)
        std::cout << "FragTrap : " << this->getName() << " says : \"Give me high five Guys!\"" << std::endl;
    else
        std::cout << "FragTrap : " << "Anonymus says : \"Give me high five Guys!\"" << std::endl;
}