/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:38:01 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:48:22 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(Brain const &other)
{
    std::cout << "Brain coppy assignment constructor called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];    
    }
    return (*this);
}

Brain::~Brain(){std::cout << "Brain destructor called" << std::endl;}
