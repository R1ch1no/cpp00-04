# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 17:10:59 by rkurnava          #+#    #+#              #
#    Updated: 2023/09/18 12:50:14 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

all : $(NAME)

SRC = PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
		@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean :
	@rm -f $(OBJ)
	@echo "Cleaning done"

fclean : clean
	@rm -f $(NAME)
	@echo "Everything cleaned"

re : fclean all

.PHONY: all clean fclean re