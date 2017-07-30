# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavagner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/30 14:56:52 by mavagner          #+#    #+#              #
#    Updated: 2017/07/30 14:56:53 by mavagner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= mcvagner.filler

CC = gcc

CFLAGS= -Wall -Wextra -Werror

SRC	= srcs/parser.c \
	  srcs/put.c \
	  srcs/algo.c \
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
