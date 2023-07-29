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
#include <stdlib.h>

int 	ft_printf(char const *format, ...);
char	*ft_itoa(unsigned int n);
void	ft_printf_putchar(int c, int *input_len);
void	ft_printf_putstr(char *str, int	*input_len);
void	ft_printf_putnbr(int nbr, int *input_len);
void    ft_printf_putunbr(unsigned int nbr, int *input_len);
void    ft_printf_puthex(unsigned long nbr, char c, int *input_len);
void    ft_printf_pointer(unsigned long str, int *input_len);

#endif
