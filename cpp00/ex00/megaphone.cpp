/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:13:27 by rkurnava          #+#    #+#             */
/*   Updated: 2023/09/14 17:43:16 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	PrintScream(char *message)
{
	int	index;

	index = 0;
	if (!message)
		return (1);
	while (message[index])
	{
		if (message[index] >= 'a' && message[index] <= 'z')
			message[index] -= 'a' - 'A';
		index++;
	}
	std::cout << message;
	return (0);
}

int	main(int argc, char **argv)
{
	int index;

	index = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		while (argv[index])
		{
			PrintScream(argv[index]);
			index++;
		}
		std::cout << "\n";
	}
	return (0);
}