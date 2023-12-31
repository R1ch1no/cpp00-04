/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:06:13 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:41:30 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//-----------------Default-----------------------//

const int Fixed::fractional_bits = 8;

Fixed::Fixed():fixed_point(0)
{
    std::cout << "Default contructor called" << std::endl;
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

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//-----------------Exercise-----------------------//

Fixed::Fixed(int const num)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(num << this->fractional_bits);
}

Fixed::Fixed(float const num)
{
    float scaledValue = num * ( 1 << this->fractional_bits);
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits((int)roundf(scaledValue));
}


int Fixed::getRawBits(void) const
{
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

float Fixed::toFloat(void) const
{
    float scaledValue = (float)this->getRawBits();
    return (scaledValue / (1 << this->fractional_bits));
}

int Fixed::toInt(void) const
{
    int res;
    if (this->getRawBits() < 0)
    {
        res = this->fixed_point * -1;
        res = res >> this->fractional_bits;
        return (res * -1);
    }
    else
        return ((int)this->getRawBits() >> this->fractional_bits);
}
 
std::ostream & operator<<(std::ostream &out, Fixed const &other)
{
    out << other.toFloat();
    return (out);
}
