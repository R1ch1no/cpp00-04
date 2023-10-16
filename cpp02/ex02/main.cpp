/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:05:57 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/16 14:34:11 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    if (a > b)
        std::cout << a << " is bigger" << std::endl;
    if (b > a)
        std::cout << b << " is bigger" << std::endl;
    if (a == b)
        std::cout << a << " & " << b << " are equal" << std::endl;
    if (a != b)
        std::cout << a << " & " << b << " are not equal" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << b + a << std::endl;
    std::cout << b << std::endl;
    a = Fixed(10.0f);
    std::cout << a-b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
    return 0;
}