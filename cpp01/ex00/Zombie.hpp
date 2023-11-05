/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:38:49 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:36:38 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

# include <iostream>
# include <string>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie(std::string);
	~Zombie();
	void announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
