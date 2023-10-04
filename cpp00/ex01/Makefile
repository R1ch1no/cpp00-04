# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 17:10:59 by rkurnava          #+#    #+#              #
#    Updated: 2023/10/04 19:13:11 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

SRC = Ex01.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

Ex01.o : ./Ex01.hpp
Contact.o : ./Contact.hpp
PhoneBook.o : ./PhoneBook.hpp

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "Cleaning done"

fclean: clean
	@rm -f $(NAME)
	@echo "Everything cleaned"

re: fclean all

.PHONY: all clean fclean re
