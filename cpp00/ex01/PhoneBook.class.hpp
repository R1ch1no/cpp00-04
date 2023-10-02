/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:40:59 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/02 20:48:36 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include <string>

class Phonebook
{
  private:
	Contact contact[8];

  public:
	Phonebook()
	{
		for (int i; i < 8; i++)
		{
			contact[i].saveFN("");
			contact[i].saveLN("");
			contact[i].saveNN("");
			contact[i].savePN("");
			contact[i].saveDS("");
		}
	}
	void save_data(int, int, std::string);
	std::string* get_data(int , int);
};

#endif