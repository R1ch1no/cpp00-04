/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:06:15 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/16 12:54:34 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int fixed_point;
        static const int fractional_bits;
    public :
        Fixed();
        Fixed(int const num);
        Fixed(float const num);
        Fixed(Fixed const & other);
        Fixed& operator=(Fixed const & other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void)const;
        int toInt(void)const;
};

std::ostream & operator<<(std::ostream &out, Fixed const &other);

#endif