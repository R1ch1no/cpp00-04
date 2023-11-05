/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:50 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:50:16 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "cat";
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Cat copy assignment constructor called" << std::endl;
    if (this != &other)
    {
        this->brain = new Brain(*other.brain);
        this->type = other.type;
    }
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow ! Meow ! Meow !" << std::endl;
}
