/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:49:33 by rkurnava          #+#    #+#             */
/*   Updated: 2023/09/15 17:43:00 by rkurnava         ###   ########.fr       */
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
	if (*num >= 8 || *num < 0)
		*num = 7;
	std::cout << "First name : ";
	getline(std::cin, book->contact[*num].FirstName);
	std::cout << "Last name : ";
	getline(std::cin, book->contact[*num].LastName);
	std::cout << "Nickname : ";
	getline(std::cin, book->contact[*num].Nickname);
	std::cout << "Phone number : ";
	getline(std::cin, book->contact[*num].PhoneNumber);
	std::cout << "Darkest secret : ";
	getline(std::cin, book->contact[*num].DarkestSecret);
	*num += 1;
}

int	main(int argc, char **argv)
{
	int num = 0;
	std::string buffer;
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
			std::cout << "Operation : ";
			buffer = " ";
			getline(std::cin, buffer);
			if (buffer == "\0")
				continue;
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