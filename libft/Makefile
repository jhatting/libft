# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shat <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/02 20:01:21 by shat              #+#    #+#              #
#    Updated: 2019/09/12 18:03:24 by shat             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c\
	  ft_bzero.c\
	  ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isblank.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_isotherwhitespace.c\
	  ft_islower.c\
	  ft_isspace.c\
	  ft_isstrwhitespace.c\
	  ft_iswhitespace.c\
	  ft_itoa.c\
	  ft_lstadd.c\
	  ft_lstdel.c\
	  ft_lstdelone.c\
	  ft_lstmap.c\
	  ft_lstnew.c\
	  ft_lstiter.c\
	  ft_isupper.c\
	  ft_memalloc.c\
	  ft_memccpy.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memdel.c\
	  ft_memmove.c\
	  ft_memset.c\
	  ft_putchar_fd.c\
	  ft_putchar.c\
	  ft_putendl_fd.c\
	  ft_putendl.c\
	  ft_putnbr.c\
	  ft_putnbr_fd.c\
	  ft_putstr_fd.c\
	  ft_putstr.c\
	  ft_min.c\
	  ft_strcat.c\
	  ft_strchr.c\
	  ft_strclr.c\
	  ft_strcmp.c\
	  ft_strcpy.c\
	  ft_strdel.c\
	  ft_strdup.c\
	  ft_strequ.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strjoin.c\
	  ft_strlcat.c\
	  ft_strlen.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strncat.c\
	  ft_strncmp.c\
	  ft_strncpy.c\
	  ft_strnequ.c\
	  ft_strnew.c\
	  ft_putnbr.c\
	  ft_strnstr.c\
	  ft_strrchr.c\
	  ft_strsplit.c\
	  ft_strstr.c\
	  ft_strsub.c\
	  ft_strtrim.c\
	  ft_tolower.c\
	  ft_toupper.c

HEADER = libft.h
CC = gcc
CFLAGS = -Wall -Wextra - Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFlAGS) -c $(SRC) -I $(HEADER)
	ar -rc $@ *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
