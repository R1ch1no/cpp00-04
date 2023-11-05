/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:13:27 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:34:55 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
			for (int i = 0; i < (int)(std::string(argv[index]).length()); i++)
				std::cout << (char)toupper(argv[index][i]);
			index++;
		}
		std::cout << std::endl;
	}
	return (0);
}
