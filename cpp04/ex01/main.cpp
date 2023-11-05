/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:57 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:49:30 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <sstream>

int main()
{
    Animal *animals[4];
    std::cout << std::endl;
    std::cout << std::endl;
    Dog basic;
    {
        std::cout << "\nStart of test scope\n" << std::endl;
        Dog tmp = basic;
        std::cout << "\nEnd of test scope\n" <<std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (i < 4 / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Animal at index " << i
                  << " is " << animals[i]->getType()
                  << " and its memory adress is " << &animals[i] << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        std::stringstream ss;
        ss << i;
        std::string set = animals[i]->getType();
        set += ss.str();
        animals[i]->setType(set);
    }
    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Animal at index " << i
                  << " is " << animals[i]->getType()
                  << " and its memory adress is " << &animals[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
        delete animals[i];
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}
