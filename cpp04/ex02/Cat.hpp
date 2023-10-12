/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:40:52 by rkurnava          #+#    #+#             */
/*   Updated: 2023/10/12 12:22:08 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "A.Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(Cat const &other);
    Cat &operator=(Cat const &other);
    ~Cat();
    void makeSound() const;
};

#endif