# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/28 12:08:02 by lluzembo          #+#    #+#              #
#    Updated: 2026/07/28 16:24:17 by lluzembo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDE = utils.hpp

SRC = ./main.cpp add_contact.cpp contact.cpp search.cpp exit_program_message.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

$(OBJS):$(INCLUDE)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re:fclean all

.PHONY: all clean fclean re