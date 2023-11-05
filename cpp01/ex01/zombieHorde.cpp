/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:19:41 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:37:34 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombies;

    if (N > 0)
        zombies = new Zombie[N];
    else
        zombies = NULL;
    for (int i = 0; i < N; i ++)
        zombies[i].nameAnyZombie(name);
    return (zombies);
}

