# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-mejh <ael-mejh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 12:37:23 by ael-mejh          #+#    #+#              #
#    Updated: 2023/12/05 13:33:59 by ael-mejh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

SRC = ft_isalpha.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strrchr.c \
		ft_bzero.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strlen.c \
		ft_tolower.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcat.c \
		ft_toupper.c ft_strncmp.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strjoin.c ft_substr.c \
		ft_strtrim.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_split.c

BSRC =  ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c  ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

bonus: $(BOBJ)
	ar rcs $(NAME) $^
	
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ) $(BOBJ)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean