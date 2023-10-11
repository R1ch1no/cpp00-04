/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:51:33 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/11 12:28:20 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
  public :
  FragTrap();
  FragTrap(std::string);
  FragTrap(FragTrap const &other);
  FragTrap &operator=(FragTrap const &other);
  ~FragTrap();
  void highFiveGuys(void);  
};

#endif