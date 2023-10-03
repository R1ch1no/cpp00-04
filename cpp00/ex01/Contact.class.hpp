/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:39:46 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/03 01:51:16 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>

class Contact
{
  private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

  public:
    Contact(void);
	~Contact(void);
	void saveFN(std::string);
	void saveLN(std::string);
	void saveNN(std::string);
	void savePN(std::string);
	void saveDS(std::string);
	std::string giveFN();
	std::string giveLN();
	std::string giveNN();
	std::string givePN();
	std::string giveDS();
};

#endif