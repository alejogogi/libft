# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 09:13:00 by alejogogi         #+#    #+#              #
#    Updated: 2024/10/29 10:47:23 by alejogogi        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =   ft_printf

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
