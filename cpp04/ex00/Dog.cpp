/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:53 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:45:28 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(Dog const &other)
{
    std::cout << "Dog copy assignment constructor called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Dog::~Dog() { std::cout << "Dog destructor called" << std::endl; }

void Dog::makeSound() const
{
    std::cout << "Woof ! Woof ! Woof !" << std::endl;
}
