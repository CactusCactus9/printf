# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 10:23:05 by abelkace          #+#    #+#              #
#    Updated: 2022/12/16 20:04:55 by abelkace         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c \
       ft_positive.c ft_pointer.c ft_hexauppercase.c ft_hexalowercase.c ft_check_type.c 

OBJS = $(SRCS:.c=.o)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
