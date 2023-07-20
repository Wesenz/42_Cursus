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

SRC = ft_printc.c

OBJS = $(SRC:.c=.o)

BONUSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c ft_lstiter.c

BONUSOBJ = $(BONUSSRC:.c=.o)

%.o : %.c $(HEADER) Makefile
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS) 

bonus: .bonus

.bonus: $(BONUSOBJ) $(OBJS)
	$(LIB) $(NAME) $(BONUSOBJ) $(OBJS)
	touch .bonus

clean:
	rm -f $(OBJS) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re