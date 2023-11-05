/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:40:59 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:35:26 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

class Phonebook
{
  private:
	Contact contact[8];

  public:
	Phonebook(void);
	~Phonebook(void);
	void save_data(int, int, std::string);
	std::string get_data(int, int);
	};

#endif
