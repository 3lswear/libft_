# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunderle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 20:03:30 by sunderle          #+#    #+#              #
#    Updated: 2020/11/10 13:10:03 by roman            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ./*.c )

OBJS = ${SRC:.c=.o}

HEADER = ./libft.h

all: $(NAME)

$(OBJS): $(HEADER) $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -include $(HEADER)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean all re compile
