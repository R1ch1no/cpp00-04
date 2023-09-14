# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 17:10:59 by rkurnava          #+#    #+#              #
#    Updated: 2023/09/14 17:23:58 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
		@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean :
	@rm -f $(OBJ)
	@echo "Cleaning done"

fclean : clean
	@rm -f megaphone
	@echo "Everything cleaned"

re : fclean all

.PHONY: all clean fclean re