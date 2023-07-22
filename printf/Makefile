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
INC = includes/
LIB = includes/libft/
LIBA = $(LIB)libft.a
LIBF = ar rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printc.c

OBJS = $(SRC:.c=.o)

BONUSSRC = 

BONUSOBJ = $(BONUSSRC:.c=.o)

HEADER = $(INC)ft_printf.h $(LIB)libft.h

%.o : %.c $(HEADER) Makefile
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBF) $(NAME) $(OBJS) $(LIBA)

bonus: .bonus

.bonus: $(BONUSOBJ) $(OBJS)
	$(LIB) $(NAME) $(BONUSOBJ) $(OBJS) $(LIBA)
	touch .bonus

clean:
	rm -f $(OBJS) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re