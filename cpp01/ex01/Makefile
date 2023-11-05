# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 19:44:54 by rkurnava          #+#    #+#              #
#    Updated: 2023/11/05 18:37:23 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex01

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

INCLUDES = ./Zombie.hpp

all : $(NAME)

SRC = main.cpp zombieHorde.cpp Zombie.cpp \

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

$(OBJ): $(INCLUDES)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean :
	@rm -f $(OBJ)
	@echo "Cleaning done"

fclean : clean
	@rm -f $(NAME)
	@echo "Everything cleaned"

re : fclean all

.PHONY: all clean fclean re
