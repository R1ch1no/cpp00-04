/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:52:13 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/11 14:10:37 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//-----------------Default-----------------------//

FragTrap::FragTrap() : ScavTrap("", 100, 100, 30)
{
    std::cout << "FragTrap default constructor with no name called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ScavTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap default constructor with name called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
    std::cout << "FragTrap copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        ScavTrap::operator=(other);
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

//-----------------Exercise-----------------------//

void FragTrap::highFiveGuys(void)
{
    if (this->getName().length() != 0)
        std::cout << this->getName() << " says : \"Give me high five Guys!\"" << std::endl;
    else
        std::cout << "Anonymus says : \"Give me high five Guys!\"" << std::endl;
}