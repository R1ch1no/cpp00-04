/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:54:32 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:40:54 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//-----------------Default-----------------------//

const int Fixed::fractional_bits = 8;

Fixed::Fixed(): fixed_point(0)
{
    std::cout << "Default contructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & other)
{
    std::cout << "Copy contructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixed_point = other.getRawBits();
    return (*this);
}

//-----------------Exercise-----------------------//

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits called" << std::endl;
    this->fixed_point = raw;
}
