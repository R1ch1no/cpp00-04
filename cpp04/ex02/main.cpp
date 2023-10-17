/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:57 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/17 14:59:49 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <sstream>

int main()
{
    int num = 4;
    Animal *animals[num];
    std::cout << std::endl;
    std::cout << std::endl;
    //Animal test; //pure abstract class test;
    Dog basic;
    {
        std::cout << "\nStart of test scope\n"
                  << std::endl;
        Dog tmp = basic;
        std::cout << "\nEnd of test scope\n"
                  << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < num; i++)
    {
        if (i < num / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < num; i++)
    {
        std::cout << "Animal at index " << i
                  << " is " << animals[i]->getType()
                  << " and its memory adress is " << &animals[i] << std::endl;
        // animals[i]->makeSound();
    }
    for (int i = 0; i < num; i++)
    {
        std::stringstream ss;
        ss << i;
        std::string set = animals[i]->getType();
        set += ss.str();
        animals[i]->setType(set);
    }
    std::cout << std::endl;
    for (int i = 0; i < num; i++)
    {
        std::cout << "Animal at index " << i
                  << " is " << animals[i]->getType()
                  << " and its memory adress is " << &animals[i] << std::endl;
        // animals[i]->makeSound();
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < num; i++)
        delete animals[i];
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}