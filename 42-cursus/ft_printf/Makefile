# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thossain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 16:13:15 by thossain          #+#    #+#              #
#    Updated: 2023/12/07 16:13:25 by thossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#CC is the compiler command.

CC = gcc

#CFLAGS are the compiler flags.

CFLAGS = -Wall -Wextra -Werror

#SRC is the list of source files.
SRC = 

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re
