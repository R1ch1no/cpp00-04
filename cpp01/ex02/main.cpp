/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:08:01 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:38:40 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string welcome = "HI THIS IS BRAIN";
	std::string *stringPTR = &welcome;
	std::string &stringREF = *stringPTR;

	std::cout << "The value of the string variable :     " << &welcome << std::endl;
	std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;
	std::cout << "The value of the string variable:      " << welcome << std::endl;
	std::cout << "The value pointed to by stringPTR :    " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF :    " << stringREF << std::endl;
}
