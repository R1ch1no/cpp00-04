/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:19:06 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/04 15:14:57 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
# define HUMANB_CPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
  private:
	std::string name;
	Weapon *weapon;

  public:
	HumanB(std::string str);
	~HumanB(void);
	void setWeapon(Weapon &gun);
	void attack(void);
};

#endif