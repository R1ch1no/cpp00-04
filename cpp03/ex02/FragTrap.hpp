/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:51:33 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/12 17:50:07 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
  public :
  FragTrap(std::string = "");
  FragTrap(FragTrap const &other);
  FragTrap &operator=(FragTrap const &other);
  ~FragTrap();
  //exercise member function
  void highFiveGuys(void);  
};

#endif