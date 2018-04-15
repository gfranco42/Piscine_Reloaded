# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/11 18:26:10 by gfranco           #+#    #+#              #
#    Updated: 2018/04/12 17:01:26 by gfranco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs
INC = -I includes
NAME = libft.a

CC = gcc -W -Wall -Werror
ALL_FILES = ft_putchar.c	\
			ft_putstr.c		\
			ft_strcmp.c		\
			ft_strlen.c		\
			ft_swap.c		\

FILES = $(patsubst %,$(SRC)/%,$(ALL_FILES))
OBJS = $(patsubst %.c, %.o, $(ALL_FILES))

all: $(NAME)

$(NAME):
	$(CC) -c $(FILES)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
