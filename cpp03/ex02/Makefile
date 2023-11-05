# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 19:05:51 by rkurnava          #+#    #+#              #
#    Updated: 2023/11/05 18:43:58 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

INCLUDES1 = ClapTrap.hpp
INCLUDES2 = ScavTrap.hpp
INCLUDES3 = FragTrap.hpp

all : $(NAME)

SRC3 = FragTrap.cpp

SRC2 = ScavTrap.cpp

SRC1 = main.cpp ClapTrap.cpp

OBJ3 = $(SRC3:.cpp=.o)

OBJ2 = $(SRC2:.cpp=.o)

OBJ1 = $(SRC1:.cpp=.o)

$(OBJ3):$(INCLUDES3)

$(OBJ2):$(INCLUDES2)

$(OBJ1):$(INCLUDES1)

$(NAME): $(OBJ1) $(OBJ2) $(OBJ3)
	$(CXX) $(OBJ1) $(OBJ2) $(OBJ3) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ1) $(OBJ2) $(OBJ3)
	@echo "Cleaning done"

fclean : clean
	@rm -f $(NAME)
	@echo "Everything cleaned"

re : fclean all

.PHONY: all clean fclean re
