/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:21:41 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/12 17:50:04 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    public:
    ScavTrap(std::string = "");
    ScavTrap(ScavTrap const &other);
    ScavTrap &operator=(ScavTrap const &other);
    ~ScavTrap();
    //exercise 01 member functions
    void guardGate();
    void attack(const std::string &target);
};

#endif