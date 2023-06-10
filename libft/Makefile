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

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

OBJS = ft_bzero.o ft_isalnum.o ft_isalpha.o \
ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o \
ft_strchr.o ft_strlen.o ft_strncmp.o ft_strrchr.o \
ft_tolower.o ft_toupper.o ft_memchr.o ft_calloc.o \
ft_memmove.o ft_memcpy.o ft_memcmp.o ft_strlcpy.o ft_atoi.o \
ft_strdup.o ft_strstr.o ft_strnstr.o ft_strlcat.o ft_strjoin.o \
ft_strtrim.o ft_substr.o ft_split.o ft_itoa.o ft_strmapi.o \
ft_striteri.o

%.o : %.c libft.h
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all