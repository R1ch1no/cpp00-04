/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:21:41 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/11 12:22:03 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(ScavTrap const &other);
    ScavTrap(std::string, int, int, int);
    ScavTrap &operator=(ScavTrap const &other);
    ~ScavTrap();
    void guardGate();
};

#endif