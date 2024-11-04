# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 17:42:24 by alejogogi         #+#    #+#              #
#    Updated: 2024/11/04 10:13:56 by alejogogi        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = 	ft_printf.c \
		print_pointer.c \
		print_unsigned.c \
		print_string.c \
		print_int.c \
		print_char.c \
		print_hex.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean
	
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
	
re: fclean all

