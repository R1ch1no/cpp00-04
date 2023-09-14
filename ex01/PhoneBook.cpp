/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:49:33 by rkurnava          #+#    #+#             */
/*   Updated: 2023/09/14 19:55:13 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

void	Search(Phonebook *book, int *num)
{
	int	index;

	index = 0;
	std::cout << "search" << std::endl;
	while (index < *num)
	{
		std::cout << book->contact[index].FirstName << std::endl;
		std::cout << book->contact[index].LastName << std::endl;
		std::cout << book->contact[index].Nickname << std::endl;
		std::cout << book->contact[index].PhoneNumber << std::endl;
		std::cout << book->contact[index].DarkestSecret << std::endl;
		index++;
	}
}

void	Add(int *num, Phonebook *book)
{
	char	buffer[1000];

	if (*num >= 8 || *num < 0)
		*num = 7;
	std::cout << "First name : ";
	std::cin >> buffer;
	book->contact[*num].FirstName = buffer;
	std::cout << "Last name : ";
	std::cin >> buffer;
	book->contact[*num].LastName = buffer;
	std::cout << "Nickname : ";
	std::cin >> buffer;
	book->contact[*num].Nickname = buffer;
	std::cout << "Phone number : ";
	std::cin >> buffer;
	book->contact[*num].PhoneNumber = buffer;
	std::cout << "Darkest secret : ";
	std::cin >> buffer;
	book->contact[*num].DarkestSecret = buffer;
	*num++;
}

int	main(int argc, char **argv)
{
	int num = 0;
	char buffer[1000];
	std::string add = "ADD";
	std::string search = "SEARCH";
	std::string end = "EXIT";
	Phonebook book;

	if (argc != 1)
	{
		std::cout << "Execute program only, no arguments!" << std::endl;
		return (1);
	}
	else
	{
		while (1)
		{
			std::cin >> buffer;
			if (buffer == end)
				return (0);
			else if (buffer == add)
				Add(&num, &book);
			else if (buffer == search)
				Search(&book, &num);
		}
	}
	return (0);
}