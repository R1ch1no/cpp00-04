/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:36:01 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/11 19:23:25 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;

public:
    ClapTrap();
    ClapTrap(std::string);
    ClapTrap(ClapTrap const &other);
    ClapTrap(std::string, int, int, int);
    ClapTrap &operator=(ClapTrap const &other);
    ~ClapTrap();
    std::string getName(void)const;
    int getHP(void);
    int getEP(void);
    int getAD(void);
    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void print_data(void);
    void decEP();
};

#endif