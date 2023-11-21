# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thossain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 19:22:52 by thossain          #+#    #+#              #
#    Updated: 2023/11/15 20:53:03 by thossain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#CC is the compiler command.

CC = gcc

#CFLAGS are the compiler flags.

CFLAGS = -Wall -Wextra -Werror

#SRC is the list of source files.
SRC = ft_atoi.c \
      ft_isascii.c \
      ft_memcmp.c \
      ft_strchr.c \
      ft_strncmp.c \
      ft_toupper.c \
      ft_bzero.c \
      ft_isdigit.c \
      ft_memcpy.c \
      ft_strlcat.c \
      ft_strnstr.c \
      ft_isalnum.c \
      ft_isprint.c \
      ft_memmove.c \
      ft_strlcpy.c \
      ft_strrchr.c \
      ft_isalpha.c \
      ft_memchr.c \
      ft_memset.c \
      ft_strlen.c \
      ft_tolower.c \
      ft_calloc.c\
      ft_strdup.c\
      ft_substr.c\

OBJ = $(SRC:.c=.o)

NAME = libft.a

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
