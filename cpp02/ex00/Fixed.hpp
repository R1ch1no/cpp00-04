/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:54:29 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/16 12:58:18 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
        int fixed_point;
        static const int fractional_bits;
    public :
        Fixed();
        Fixed(Fixed const & other);
        Fixed& operator=(Fixed const & other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif