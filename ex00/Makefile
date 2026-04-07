# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/07 11:43:10 by lluzembo          #+#    #+#              #
#    Updated: 2026/04/07 13:03:44 by lluzembo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ): $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re clean fclean all
