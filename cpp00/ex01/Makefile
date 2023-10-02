# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 17:10:59 by rkurnava          #+#    #+#              #
#    Updated: 2023/10/02 19:36:11 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

SRC = Ex01.cpp ContactAccessors.cpp PhoneBookAccessors.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	@$(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "Cleaning done"

fclean: clean
	@rm -f $(NAME)
	@echo "Everything cleaned"

re: fclean all

.PHONY: all clean fclean re
