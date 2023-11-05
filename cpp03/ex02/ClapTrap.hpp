/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:36:01 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:44:10 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;

public:
    ClapTrap(std::string = "");
    ClapTrap(ClapTrap const &other);
    ClapTrap &operator=(ClapTrap const &other);
    ~ClapTrap();
    // getters
    std::string getName(void) const;
    int getHP(void) const;
    int getEP(void) const;
    int getAD(void) const;
    void print_data(void) const;
    // exercise member functions
    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
