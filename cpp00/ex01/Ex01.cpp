/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:49:33 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/03 12:03:12 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ex01.hpp"

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
		buffer[i] = ' ';
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

void	PrintContact(Phonebook *book, int contact)
{
	std::cout << "First name : " << book->get_data(contact, 0) << std::endl;
	std::cout << "Last name : " << book->get_data(contact, 1) << std::endl;
	std::cout << "Nickname : " << book->get_data(contact, 2) << std::endl;
	std::cout << "Phone number : " << book->get_data(contact, 3) << std::endl;
	std::cout << "Darkest secret : " << book->get_data(contact, 4) << std::endl;
}

int	contactInfo(int limit)
{
	char	buffer[256];
	int		contact;

	std::string collector;
	std::cout << "Who's information do you wish to see ? (index) : ";
	std::cin >> buffer;
	contact = 0;
	contact = atoi(buffer);
	getline(std::cin, collector);
	if (contact <= 0 || contact > limit)
	{
		std::cout << "No contact found under this index! Try again : ";
		std::cin >> buffer;
		contact = atoi(buffer);
		getline(std::cin, collector);
	}
	if (contact <= 0 || contact > limit)
		std::cout << "No contact found under this index! Leaving search" << std::endl;
	else
		return (contact - 1);
	return (-1);
}

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

void	PrintBody(Phonebook *book, int index, int limit)
{
	while (index < limit)
	{
		std::cout << std::right << std::setw(10) << "|         " << index
			+ 1 << std::setw(1) << "|";
		PrintSearch(book->get_data(index, 0));
		PrintSearch(book->get_data(index, 1));
		PrintSearch(book->get_data(index, 2));
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

void	Search(Phonebook *book, int *num)
{
	int	contact;
	int	index;
	int	limit;

	std::string collector;
	index = 0;
	limit = *num;
	if (limit > 8)
		limit = 8;
	if (limit == 0)
		return ;
	PrintHead();
	PrintBody(book, index, limit);
	PrintBottom();
	contact = contactInfo(limit);
	if (contact == -1)
		return ;
	PrintContact(book, contact);
}

int	isEmpty(std::string str)
{
	if (str.length() == 0)
	{
		std::cout << "Invalid contact\n"
					<< "No contact field can be empty" << std::endl;
		return (1);
	}
	else
		return (0);
}

void	Add(int *num, Phonebook *book)
{
	int	person;

	std::string buffer;
	person = *num % 8;
	std::cout << "First name : ";
	getline(std::cin, buffer);
	book->save_data(person, 0, buffer);
	if (isEmpty(book->get_data(person, 0)))
		return ;
	std::cout << "Last name : ";
	getline(std::cin, buffer);
	book->save_data(person, 1, buffer);
	if (isEmpty(book->get_data(person, 1)))
		return ;
	std::cout << "Nickname : ";
	getline(std::cin, buffer);
	book->save_data(person, 2, buffer);
	if (isEmpty(book->get_data(person, 2)))
		return ;
	std::cout << "Phone number : ";
	getline(std::cin, buffer);
	book->save_data(person, 3, buffer);
	if (isEmpty(book->get_data(person, 3)))
		return ;
	std::cout << "Darkest secret : ";
	getline(std::cin, buffer);
	book->save_data(person, 4, buffer);
	if (isEmpty(book->get_data(person, 4)))
		return ;
	*num += 1;
}

int	main(int argc, char **argv)
{
	int			num;
	Phonebook	book;

	num = 0;
	(void)argv;
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
			buffer = "";
			if (getline(std::cin, buffer).eofbit)
			{
				buffer = "";
				std::cin.clear();
				std::cout << std::endl;
			}
			else if (buffer == end)
				return (0);
			else if (buffer == add)
				Add(&num, &book);
			else if (buffer == search)
				Search(&book, &num);
			else
			{
				std::cout << "Operation not recognised";
				std::cout << ",try again." << std ::endl;
			}
		}
	}
	return (0);
}
