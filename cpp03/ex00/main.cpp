/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:36:03 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/11 14:52:14 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "All contructors\n------------------------------------------------" << std::endl;
    ClapTrap a ;
    ClapTrap b("Jeremy");
    
    ClapTrap c("Monique");
    ClapTrap d("Barbie");
    
    ClapTrap e(c);
    ClapTrap f = d;
    std::cout << "------------------------------------------------s\nAll contructors are done\n"
              << std::endl;
    std::cout << "Stats of our players at the start\n" << std::endl;
    a.print_data();
    b.print_data();
    c.print_data();
    d.print_data();
    e.print_data();
    f.print_data();
    a.attack(b.getName());          //Jeremy gets damaged by anonymus
    b.takeDamage(a.getAD());        //Jeremy gets damaged for 0 points
    b.beRepaired(1);                //Jeremy gets repaired by 1 point
    e.attack(b.getName());          //Jeremy gets damaged by Monique
    b.takeDamage(e.getAD());        //Jeremy gets damaged for 20 points
    c.attack(b.getName());          //Jeremy gets damaged by Monique
    b.takeDamage(c.getAD());        //Jeremy gets damaed for 20 points
    e.attack(f.getName());          //Barbie gets damaged by Monique
    f.takeDamage(e.getAD());        //Barbie gets damaged for 20 points;
    std::cout << "\nCommands in main finished\n"<< std::endl;
    std::cout << "Stats of our players at the end\n" << std::endl;
    a.print_data();
    b.print_data();
    c.print_data();
    d.print_data();
    e.print_data();
    f.print_data();
    std::cout << "\nAll destructors\n------------------------------------------------" << std::endl;
}