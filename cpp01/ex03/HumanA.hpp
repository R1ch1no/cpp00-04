/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:19:11 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/04 19:22:39 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
  private:
	std::string name;
    Weapon &weapon;

  public:
	HumanA(std::string str, Weapon &gun);
	~HumanA();
	void attack();
};

#endif