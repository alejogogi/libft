/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:03:56 by alejogogi         #+#    #+#             */
/*   Updated: 2024/11/01 18:22:16 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_unsigned(unsigned int num)
{
	
}
NAME = libftprintf.a
LIBFTNAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = ./libft
SRC =   ft_printf.c\
		print_char.c\
		print_unsigned.c\
		print_string.c\
		print_int.c\
		print_pointer.c\
		print_hex.c\

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
        $(AR) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
        $(CC) $(CFLAGS) -c -o $@ $<
        
clean: 
        $(RM) $(OBJ)

fclean: clean
        $(RM) $(NAME)

re: fclean all