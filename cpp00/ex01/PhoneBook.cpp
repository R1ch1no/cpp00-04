/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:49:33 by rkurnava          #+#    #+#             */
/*   Updated: 2023/09/18 12:58:23 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

void	PrintHead(void)
{
	std::cout << std::right << std::setw(11) << " -----------";
	std::cout << std::right << std::setw(10) << "-----------";
	std::cout << std::right << std::setw(10) << "-----------";
	std::cout << std::right << std::setw(9) << "---------- " << std::endl;
	std::cout << std::right << std::setw(11) << "|     Index|";
	std::cout << std::right << std::setw(11) << "First Name|";
	std::cout << std::right << std::setw(11) << " Last Name|";
	std::cout << std::right << std::setw(11) << "  Nickname|" << std::endl;
	std::cout << std::right << std::setw(11) << " -----------";
	std::cout << std::right << std::setw(10) << "-----------";
	std::cout << std::right << std::setw(10) << "-----------";
	std::cout << std::right << std::setw(9) << "---------- " << std::endl;
}

void	PrintSearch(std::string str)
{
	char	buffer[10];
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = str.length();
	while (i < 10 && i < 10 - len)
	{
		buffer[i] = '.';
		i++;
	}
	while (i < 10 && str[j])
	{
		buffer[i] = str[j];
		i++;
		j++;
	}
	if (len > 10)
	{
		if (str[10])
			buffer[9] = '.';
	}
	std::cout << std::right << std::setw(10) << buffer << "|";
}

void	PrintBody(Phonebook *book, int index, int limit)
{
	while (index < limit)
	{
		std::cout << std::right << std::setw(10) << "|         " << index
			+ 1 << std::setw(1) << "|";
		PrintSearch(book->contact[index].FirstName);
		PrintSearch(book->contact[index].LastName);
		PrintSearch(book->contact[index].Nickname);
		std::cout << "\n";
		index++;
	}
}
void	PrintBottom(void)
{
	std::cout << std::right << std::setw(11) << " -----------";
	std::cout << std::right << std::setw(10) << "-----------";
	std::cout << std::right << std::setw(10) << "-----------";
	std::cout << std::right << std::setw(9) << "---------- " << std::endl;
}

void	PrintContact(Phonebook *book, int contact)
{
	std::cout << "First name : " << book->contact[contact].FirstName << std::endl;
	std::cout << "Last name : " << book->contact[contact].LastName << std::endl;
	std::cout << "Nickname : " << book->contact[contact].Nickname << std::endl;
	std::cout << "Phone number : " << book->contact[contact].PhoneNumber << std::endl;
	std::cout << "Darkest secret : " << book->contact[contact].DarkestSecret << std::endl;
}

void	Search(Phonebook *book, int *num)
{
	char	*buffer;
	int		index;
	int		limit;
	int		contact;

	std::string collector[100];
	index = 0;
	limit = *num;
	if (limit > 8)
		limit = 8;
	if (limit == 0)
		return ;
	PrintHead();
	PrintBody(book, index, limit);
	PrintBottom();
	std::cout << "Who's information do you wish to see ? (index) : ";
	std::cin >> buffer;
	getline(std::cin, collector);
	contact = 0;
	contact = atoi(buffer);
	contact--;
	if (contact < 0 || contact > limit)
	{
		std::cout << "No contact found under this index! Try again : ";
		std::cin >> buffer;
		getline(std::cin, collector);
		contact = atoi(buffer);
		contact--;
	}
	if (contact < 0 || contact > limit)
	{
		std::cout << "No contact found under this index! Leaving search" << std::endl;
		return ;
	}
	PrintContact(book, contact);
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
			else
				std::cout << "Operation not recognised, try again." << std ::endl;
		}
	}
	return (0);
}
