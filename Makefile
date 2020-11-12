# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunderle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 20:03:30 by sunderle          #+#    #+#              #
#    Updated: 2020/11/12 13:26:32 by sunderle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ./ft_*.c )

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

# ADDITIONAL RULES!!!!

main: $(NAME)
	$(CC) $(CFLAGS) main.c -L=. -l=ft && ./a.out

norm:
	norminette_linux -R CheckForbiddenSourceHeader $(SRC)
	norminette_linux -R CheckForbiddenSourceHeader $(HEADER)

.PHONY: clean fclean all re
