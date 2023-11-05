/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:46 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:48:31 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("animal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
    std::cout << "WrongAnimal copy assignment constructor called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called" << std::endl; }

void WrongAnimal::makeSound() const
{
    std::cout << "What does the Wronganimal say ?" << std::endl;
}

std::string WrongAnimal::getType() const { return this->type; }
