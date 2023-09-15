/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:49:33 by rkurnava          #+#    #+#             */
/*   Updated: 2023/09/15 12:01:20 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

void	PrintSearch(std::string str, int index)
{
	int	i;

	i = 0;
	index + 1;
	while (i < 9 && str[i])
	{
		std::cout << std::right << str[i];
		i++;
	}
	if (str[i] && i == 9)
		std::cout << std::right << '.';
	else if (i != 10)
	{
		while (i <= 10)
		{
			std::cout << std::right << ' ';
			i++;
		}
	}
}

void	Search(Phonebook *book, int *num)
{
	int	index;

	index = 0;
	while (index < *num)
	{
		std::cout << std::right << index + 1 << "         |";
		PrintSearch(book->contact[index].FirstName, index);
		std::cout << std::right << "|";
		PrintSearch(book->contact[index].LastName, index);
		std::cout << std::right << "|";
		PrintSearch(book->contact[index].Nickname, index);
		std::cout << std::right << "|";
		PrintSearch(book->contact[index].PhoneNumber, index);
		std::cout << std::right << "|";
		PrintSearch(book->contact[index].DarkestSecret, index);
		std::cout << std::right << '\n';
		index++;
	}
}

void	Add(int *num, Phonebook *book)
{
	char	buffer[500];

	if (*num >= 8 || *num < 0)
		*num = 7;
	std::cout << "First name : ";
	std::cin.getline(book->contact[*num].FirstName,500);
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
	*num += 1;
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
			if (buffer == NULL)
				continue ;
			else if (buffer == end)
				return (0);
			else if (buffer == add)
				Add(&num, &book);
			else if (buffer == search)
				Search(&book, &num);
		}
	}
	return (0);
}