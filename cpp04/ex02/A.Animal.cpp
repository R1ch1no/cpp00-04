/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:46 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:50:13 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.Animal.hpp"

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
