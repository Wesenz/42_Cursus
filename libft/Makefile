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

HEADER = libft.h

NAME = libft.a

LIB = ar rcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c \
ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c \
ft_tolower.c ft_toupper.c ft_memchr.c ft_calloc.c \
ft_memmove.c ft_memcpy.c ft_memcmp.c ft_strlcpy.c ft_atoi.c \
ft_strdup.c ft_strstr.c ft_strnstr.c ft_strlcat.c ft_strjoin.c \
ft_strtrim.c ft_substr.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c

OBJS = $(SRC:.c=.o)

BONUSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c

BONUSOBJ = $(BONUSSRC:.c=.o)

%.o : %.c libft.h
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ) $(OBJ)

clean:
	rm -f $(OBJS) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonuss: fclean bonus