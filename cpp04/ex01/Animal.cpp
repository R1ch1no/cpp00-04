/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:46 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/11 18:32:16 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("animal")
{std::cout << "Animal default constructor called" << std::endl;};


Animal::Animal(Animal const & other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this=other;
}

Animal &Animal::operator=(Animal const &other)
{
    std::cout << "Animal copy assignment constructor called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Animal::~Animal(){std::cout << "Animal destructor called" << std::endl;}

void Animal::makeSound() const
{
    std::cout << "What does the animal say ?" << std::endl;
}

std::string Animal::getType() const{return this->type;}

void Animal::setType(std::string whatever)
{
    this->type = whatever;
}