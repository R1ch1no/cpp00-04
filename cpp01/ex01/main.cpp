/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:52:30 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:37:19 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N;
	Zombie *zombies;

	N = 20;
	zombies = zombieHorde(N, "BrainWashedZombie");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
    if (N > 0)
        delete[] zombies;
    return (0);
}
