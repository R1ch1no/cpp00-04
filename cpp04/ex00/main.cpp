/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:57 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/12 19:34:02 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new const Animal();
    const Animal *j = new const Dog();
    const Animal *i = new const Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();                                 // will output the cat sound!
    j->makeSound();                                 // will output the dog sound!
    meta->makeSound();                              // will output my default message
    delete meta;
    delete j;
    delete i;
    const WrongAnimal *test = new const WrongCat();
    std::cout << test->getType() << " " << std::endl;
    test->makeSound();
    delete test;
    return 0;
}