# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jenny <jenny@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 17:17:26 by jede-ara          #+#    #+#              #
#    Updated: 2023/11/29 21:10:18 by jenny            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN	:= \033[1;32m
RED		:= \033[1;31m
RES		:= \033[0m

SRC = PhoneBook.cpp Contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = phonebook

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