/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:57 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/11 18:44:11 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <sstream>

int main()
{
    int num = 10;
    Animal *animals[num];
    for (int i = 0; i < num; i++)
    {
        if (i < num / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < num; i++)
    {
        std::cout << "Animal at index " << i
                  << " is " << animals[i]->getType()
                  << " and its memory adress is " << &animals[i] << std::endl;
    }
    for (int i = 0; i < num; i++)
    {
        std::stringstream ss;
        ss << i;
        std::string set = animals[i]->getType();
        set += ss.str();
        animals[i]->setType(set);
    }
    for (int i = 0; i < num; i++)
    {
        std::cout << "Animal at index " << i
                  << " is " << animals[i]->getType()
                  << " and its memory adress is " << &animals[i] << std::endl;
    }
    for (int i = 0; i < num; i++)
        delete animals[i];
    return 0;
}