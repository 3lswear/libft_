# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunderle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 20:03:30 by sunderle          #+#    #+#              #
#    Updated: 2020/11/09 20:13:51 by roman            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ./*.c )

OBJS = ${SRC:.c=.o}

HEADER = ./libft.h

all: $(NAME)

compile: $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I $(HEADER)

$(NAME): compile
	ar rc $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean all re

