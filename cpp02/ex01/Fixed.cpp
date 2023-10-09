/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:06:13 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/09 19:49:25 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "Default contructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed& other)
{
    std::cout << "Copy contructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(int const num)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(num << this->fractional_bits);
}

Fixed::Fixed(float const num)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits((int)roundf(num * (1 << this->fractional_bits)));
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        fixed_point = other.getRawBits();
    return (*this);
}

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

float Fixed::toFloat(void) const
{
    return (((float)this->getRawBits() / (1 << this->fractional_bits)));
}

int Fixed::toInt(void) const
{
    return (this->getRawBits() >> this->fractional_bits);
}
 
std::ostream & operator<<(std::ostream &out, Fixed const &other)
{
    out << other.toFloat();
    return (out);
}