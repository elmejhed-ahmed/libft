# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 12:37:23 by ael-mejh          #+#    #+#              #
#    Updated: 2023/11/08 15:30:02 by ael-mejh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_tolower.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_toupper.c ft_strncmp.c ft_atoi.c ft_calloc.c ft_strdup.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strjoin.c ft_substr.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
