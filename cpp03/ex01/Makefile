# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 19:05:51 by rkurnava          #+#    #+#              #
#    Updated: 2023/10/11 12:39:40 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES1 = ./ClapTrap.hpp
INCLUDES2 = ./ScavTrap.hpp

all : $(NAME)

SRC2 = ScavTrap.cpp \

SRC1 = main.cpp ClapTrap.cpp \

OBJ2 = $(SRC2:.cpp=.o)

OBJ1 = $(SRC1:.cpp=.o)

$(OBJ1):$(INCLUDES1)

$(OBJ2):$(INCLUDES2)

$(NAME): $(OBJ1) $(OBJ2)
	$(CXX) $(OBJ2) $(OBJ1) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ1) $(OBJ2)
	@echo "Cleaning done"

fclean : clean
	@rm -f $(NAME)
	@echo "Everything cleaned"

re : fclean all

.PHONY: all clean fclean re
