/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:06:13 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/10 16:51:57 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//-----------------Default-----------------------//

Fixed::Fixed():fixed_point(0){}

Fixed::Fixed(Fixed const &other) {*this = other;}

Fixed &Fixed::operator=(Fixed const &other)
{
    if (this != &other)
        this->fixed_point = other.getRawBits();
    return (*this);
}

Fixed::~Fixed(){}

//-----------------Exercise-----------------------//

Fixed::Fixed(int const num)
{
    setRawBits(num << this->fractional_bits);
}

Fixed::Fixed(float const num)
{
    float scaledValue = num * (1 << this->fractional_bits);
    this->setRawBits((int)roundf(scaledValue));
}


int Fixed::operator<(Fixed const &other)
{
    return (this->fixed_point < other.fixed_point);
}

int Fixed::operator>(Fixed const &other)
{
    return (this->fixed_point > other.fixed_point);
}

int Fixed::operator<=(Fixed const &other)
{
    return (this->fixed_point <= other.fixed_point);
}

int Fixed::operator>=(Fixed const &other)
{
    return (this->fixed_point >= other.fixed_point);
}

int Fixed::operator==(Fixed const &other)
{
    return (this->fixed_point == other.fixed_point);
}

int Fixed::operator!=(Fixed const &other)
{
    return (this->fixed_point != other.fixed_point);
}

Fixed Fixed::operator+(Fixed const &other)
{
    Fixed result(this->toFloat() + other.toFloat());
    return (result);
}

Fixed Fixed::operator-(Fixed const &other)
{
    Fixed result(this->toFloat() - other.toFloat());
    return (result);
}

Fixed Fixed::operator*(Fixed const &other)
{
    Fixed result(this->toFloat() * other.toFloat());
    return (result);
}

Fixed Fixed::operator/(Fixed const &other)
{
    if ((other.toFloat()) == 0)
        return (this->toFloat()); 
    Fixed result(this->toFloat() / other.toFloat());
    return (result);
}

Fixed &Fixed::operator++()
{
    this->fixed_point++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return (temp);
}

Fixed &Fixed::operator--()
{
    this->fixed_point--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return (temp);
}

Fixed &Fixed::min(Fixed &one, Fixed &two)
{
    if (one.fixed_point < two.fixed_point)
        return (one);
    return (two);
}

Fixed Fixed::min(Fixed const &one, Fixed const &two)
{
    if (one.fixed_point < two.fixed_point)
        return one;
    return two;
}

Fixed &Fixed::max(Fixed &one, Fixed &two)
{
    if (one.fixed_point > two.fixed_point)
        return (one);
    return (two);
}

Fixed Fixed::max(Fixed const &one, Fixed const &two)
{
    if (one.fixed_point > two.fixed_point)
        return one;
    return two;
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
    return (this->getRawBits() >> this->fractional_bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &other)
{
    out << other.toFloat();
    return (out);
}