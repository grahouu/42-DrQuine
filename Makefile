# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acollin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/11 16:12:25 by acollin           #+#    #+#              #
#    Updated: 2016/08/11 16:12:32 by acollin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colleen Grace Sully
CC = gcc
FLAGS =	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): %: %.c
	$(CC) $(FLAGS) -o $@ $<

clean:
	@echo "\033[31mNo object files are created by this Makefile\033[0m"

fclean: clean
	-/bin/rm -f $(NAME) Grace_kid.c

re: fclean all