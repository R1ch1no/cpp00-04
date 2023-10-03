/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:48:51 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/03 21:19:38 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombiePtr1;
	Zombie *zombiePtr2;
	//Zombie *zombiePtr3; for testing, to show memory leaks

	randomChump("stack_zombie 1");
	randomChump("stack_zombie 2");
	zombiePtr1 = newZombie("heap_zombie 1");
	zombiePtr2 = newZombie("heap_zombie 2");
	delete (zombiePtr1);
	delete (zombiePtr2);
	//zombiePtr3 = newZombie("heap_zombie 3");
	return (0);
}