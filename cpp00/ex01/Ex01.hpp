/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:39:42 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/02 20:45:14 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ex01_H
# define Ex01_H

# include "Contact.class.hpp"
# include "PhoneBook.class.hpp"
# include <cstdlib>
# include <iomanip>
# include <iostream>

Contact	getPerson(int);
void	save_info(std::string, int);
void	save_data(int, int, std::string);

#endif