# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 18:28:11 by marcfer2          #+#    #+#              #
#    Updated: 2023/05/05 18:28:13 by marcfer2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
AR = ar rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_putchar.c ft_printf_putstr.c ft_printf_putnbr.c ft_printf_putunbr.c ft_itoa.c

OBJS = $(SRC:.c=.o)

BONUSSRC = 

BONUSOBJ = $(BONUSSRC:.c=.o)

HEADER = ft_printf.h

%.o : %.c $(HEADER) Makefile
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): 	$(OBJS)
	 		$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUSOBJ)

clean-libft:
	rm -f $(LIBA)

fclean: clean clean-libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re main $(LIBA) clean-libft