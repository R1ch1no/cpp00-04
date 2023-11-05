/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:41:31 by rkurnava          #+#    #+#             */
/*   Updated: 2023/11/05 18:50:15 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &other);
        Brain &operator=(Brain const &other);
        ~Brain();
};

#endif
