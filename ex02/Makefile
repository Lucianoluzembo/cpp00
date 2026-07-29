# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/29 20:22:16 by lluzembo          #+#    #+#              #
#    Updated: 2026/07/29 20:31:06 by lluzembo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CXX = c++

HEADER = Account.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp tests.cpp 

OBJS = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OBJS)

$(OBJS): $(HEADER)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: clean fclean re all

