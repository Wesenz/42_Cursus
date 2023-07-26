/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:55:01 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/20 16:55:04 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>

int ft_printf(char const *format, ...);
void	ft_printf_putchar(int c, int *wrd_len);
void	ft_printf_putstr(char *str, int	*wrd_len);
// int	ft_prints(char *s);
// int	ft_printp(unsigned long ptr);
// int	ft_printid(int nb);
// int	ft_printu(unsigned int nb);
// int	ft_printhex(unsigned int n, char *base);
// int	ft_printf(char const *s, ...);

#endif
