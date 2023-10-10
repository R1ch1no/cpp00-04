/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:36:03 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/10 19:23:11 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap a;
    ClapTrap b("Jeremy");

    ScavTrap c("Monique");
    ScavTrap d("Barbie");

    ScavTrap e(c);
    ScavTrap f = d;
    std::cout << "\n\nAll contructors are done\n" << std::endl;
    a.attack("Jeremy");
    b.takeDamage(5);
    b.beRepaired(1);
    e.attack("Jeremy");
    b.takeDamage(5);
    c.attack("Jeremy");
    b.takeDamage(42);
    e.attack("Barbie");
    f.takeDamage(42);
    std::cout << "\n\nCommands in main finished\n"<< std::endl;
}