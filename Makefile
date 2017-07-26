# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbodak <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/21 16:40:31 by mbodak            #+#    #+#              #
#    Updated: 2017/04/03 19:56:36 by mbodak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= mcvagner.filler

CC = gcc

CFLAGS= -Wall -Wextra -Werror

SRC	= srcs/parser.c \
	  srcs/put_shape.c \
	  srcs/strategy.c \
	  srcs/filler.c \
	  srcs/main.c

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C LIBFT/
	$(CC) $(CFLAGS) $(SRC) LIBFT/libft.a -o $(NAME)
	@printf "mcvagner.filler READY FOR THE FIGHT !!! \n"

clean:
	rm -rf $(OBJ)
	make -C LIBFT clean

fclean : clean
	rm -rf $(NAME)
	make -C LIBFT fclean

re : 	fclean all
