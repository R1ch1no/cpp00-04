/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:36:03 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:43:30 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "All contructors\n------------------------------------------------" << std::endl;
    ClapTrap a;
    ClapTrap b("Jeremy");
    std::cout << "\n\n" << std::endl;
    const ScavTrap c("Monique");
    const ScavTrap d("Barbie");
    std::cout << "\n\n" << std :: endl;
    ScavTrap e(c);
    ScavTrap f = d;
    std::cout << "------------------------------------------------s\nAll contructors are done\n"
              << std::endl;
    std::cout << "Stats of our players at the start\n"
              << std::endl;
    a.print_data();
    b.print_data();
    c.print_data();
    d.print_data();
    e.print_data();
    f.print_data();
    a.attack(b.getName());
    b.takeDamage(a.getAD());
    b.beRepaired(1);
    e.attack(b.getName());
    b.takeDamage(e.getAD());
    e.attack(f.getName());
    f.takeDamage(e.getAD());
    std::cout << "\nCommands in main finished\n"
              << std::endl;
    std::cout << "Stats of our players at the end\n"
              << std::endl;
    a.print_data();
    b.print_data();
    c.print_data();
    d.print_data();
    e.print_data();
    f.print_data();
    std::cout << "\nAll destructors\n------------------------------------------------" << std::endl;
}
