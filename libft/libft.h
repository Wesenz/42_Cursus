/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:25:32 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/03 18:25:35 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
int ft_tolower(int c);
int ft_toupper(int c);
size_t ft_strlen(const char *s);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c, size_t n);

#endif
