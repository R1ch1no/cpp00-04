# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 19:44:54 by rkurnava          #+#    #+#              #
#    Updated: 2023/11/05 18:39:24 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex03

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic


all : $(NAME)

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

HumanA.o : ./HumanA.hpp ./Weapon.hpp
HumanB.o : ./HumanB.hpp ./Weapon.hpp
Weapon.o : ./Weapon.hpp
main.o : ./HumanA.hpp ./HumanB.hpp

clean :
	@rm -f $(OBJ)
	@echo "Cleaning done"

fclean : clean
	@rm -f $(NAME)
	@echo "Everything cleaned"

re : fclean all

.PHONY: all clean fclean re
