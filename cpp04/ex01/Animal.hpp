/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:48 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:48:21 by rkurnava         ###   ########.fr       */
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
    Animal();
    Animal(Animal const &other);
    Animal & operator=(Animal const &other);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
    void setType(std::string);
};

#endif
