/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:49:33 by rkurnava          #+#    #+#             */
/*   Updated: 2023/09/15 18:41:21 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

void	PrintSearch(std::string str)
{
	int	i;
	int	len;

	i = 0;
	len = str.length();
	while (i < 9 - len)
	{
		std::cout << std::right << ' ';
		i++;
	}
	i = 0;
	while (i < 9 && str[i])
	{
		std::cout << std::right << str[i];
		i++;
	}
	if (str[i] && i == 9)
		std::cout << std::right << '.';
}

void	Search(Phonebook *book, int *num)
{
	int	index;
	int	limit;

	index = 0;
	limit = *num;
	if (limit > 8)
		limit = 8;
	while (index < limit)
	{
		std::cout << std::right << "         " << index + 1 << "|";
		PrintSearch(book->contact[index].FirstName);
		std::cout << std::right << "|";
		PrintSearch(book->contact[index].LastName);
		std::cout << std::right << "|";
		PrintSearch(book->contact[index].Nickname);
		std::cout << std::right << "|";
		PrintSearch(book->contact[index].PhoneNumber);
		std::cout << std::right << "|";
		PrintSearch(book->contact[index].DarkestSecret);
		std::cout << std::right << "|";
		std::cout << '\n';
		index++;
	}
}

void	Add(int *num, Phonebook *book)
{
	int	person;

	person = *num % 8;
	std::cout << "First name : ";
	getline(std::cin, book->contact[person].FirstName);
	std::cout << "Last name : ";
	getline(std::cin, book->contact[person].LastName);
	std::cout << "Nickname : ";
	getline(std::cin, book->contact[person].Nickname);
	std::cout << "Phone number : ";
	getline(std::cin, book->contact[person].PhoneNumber);
	std::cout << "Darkest secret : ";
	getline(std::cin, book->contact[person].DarkestSecret);
	*num += 1;
}

int	main(int argc, char **argv)
{
	int			num;
	Phonebook	book;

	num = 0;
	std::string buffer;
	std::string add = "ADD";
	std::string search = "SEARCH";
	std::string end = "EXIT";
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
