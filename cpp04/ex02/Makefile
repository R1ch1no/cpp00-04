# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 15:40:59 by rkurnava          #+#    #+#              #
#    Updated: 2023/11/05 18:50:01 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

INCLUDES1 = Dog.hpp

INCLUDES2 = Cat.hpp

INCLUDES3 = A.Animal.hpp

INCLUDES4 = Brain.hpp

all : $(NAME)

SRC1 = main.cpp
OBJ1 = $(SRC1:.cpp=.o)

SRC2 = Dog.cpp
OBJ2 = $(SRC2:.cpp=.o)

SRC3 = Cat.cpp
OBJ3 = $(SRC3:.cpp=.o)

SRC4 = A.Animal.cpp
OBJ4 = $(SRC4:.cpp=.o)

SRC5 = Brain.cpp
OBJ5 = $(SRC5:.cpp=.o)

$(OBJ1):$(INCLUDES1) $(INCLUDES2)
$(OBJ2):$(INCLUDES1) $(INCLUDES3) $(INCLUDES4)
$(OBJ3):$(INCLUDES2) $(INCLUDES3) $(INCLUDES4) 
$(OBJ4):$(INCLUDES3)
$(OBJ5):$(INCLUDES4)

$(NAME): $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5)
	$(CXX) $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5)
	@echo "Cleaning done"

fclean : clean
	@rm -f $(NAME)
	@echo "Everything cleaned"

re : fclean all

.PHONY: all clean fclean re
