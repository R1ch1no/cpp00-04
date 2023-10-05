/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:35:13 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/05 13:28:29 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl;
	{
		HumanB jim("Jim");
		jim.attack();
	}
	std::cout << std::endl;
	{
		Weapon wep = Weapon("pepper spray");
		HumanB michelle("Michelle Obama");
		michelle.setWeapon(wep);
		michelle.attack();
		wep.setType("taser gun");
		michelle.attack();
	}
	return (0);
}