/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:39:46 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:35:18 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
