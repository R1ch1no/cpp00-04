/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:48 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/12 12:31:21 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    virtual ~Animal();
    virtual void makeSound() const;
    virtual std::string getType() const;
    virtual void setType(std::string);
};

#endif