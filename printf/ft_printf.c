/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:26:16 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/17 20:26:35 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_letter(const char str, va_list args, int *wrd_len)
{
	if (str == 'c')
		ft_printf_putchar(va_arg(args, int), wrd_len);
	else if (str == 's')
		ft_printf_putstr(va_arg(args, char *), wrd_len);
	/*
	else if (*format == 'p')
		checker = checker + ft_printp(va_arg(args, unsigned long));
	else if (*format == 'd' || *format == 'i')
		checker = checker + ft_printdi(va_arg(args, int));
	else if (*format == 'u')
		checker = checker + ft_printu(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
	{}
	*/
	return (-1);
}

int ft_printf(char const *str, ...)
{
	va_list args;
	int	i;
	int	wrd_len;

	i = 0;
	wrd_len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_printf_putchar(str[i], &wrd_len);
		else if (str[i] == '%' && str[i + 1] != '\0')
		{
			ft_check_letter(str[i + 1], args, &wrd_len);
			i++;
		}
		i++;
		if (wrd_len == -1)
			return (-1);
	}
	va_end(args);
	return (wrd_len);
}