# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 16:51:47 by jenny             #+#    #+#              #
#    Updated: 2024/01/16 17:51:28 by jede-ara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN	:= \033[1;32m
RED		:= \033[1;31m
RES		:= \033[0m

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compilation done!$(RESET)"

clean:
	$(RM) $(OBJ)
	@echo "$(RED)Cleaned!$(RESET)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)Fully Cleaned!$(RESET)"

re: fclean $(NAME)

.SILENT:

.PHONY: all clean fclean re