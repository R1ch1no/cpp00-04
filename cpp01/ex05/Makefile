# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 19:44:54 by rkurnava          #+#    #+#              #
#    Updated: 2023/10/04 19:23:05 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex05

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = ./Harl.hpp

all : $(NAME)

SRC = Harl.cpp main.cpp \

OBJ = $(SRC:.cpp=.o)

$(OBJ):$(INCLUDES)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

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