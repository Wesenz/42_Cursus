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

#include "includes/printf.h"

static int	check_letter(const char *format, va_list args, int *len)
{
	int	checker;

	checker = 0;

	if (*format == 'c')
		checker = checker + ft_printc((char)va_args(args, int));
	else if (*format == 's')
		checker = checker + ft_prints(va_args(args, char *));
	else if (*format == 'p')
		checker = checker + ft_printp(va_arg(args, unsigned long));
	else if (*format == 'd' || *format == 'i')
		checker = checker + ft_printdi(va_arg(args, int));
	else if (*format == 'u')
		checker = checker + ft_printu(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
	
}

static int	percen_checker(const char *format, va_list args, int *len)
{	
	while (*format != '\0')
	{
	
		if (*format == '%')
		{	
			format++;
			if (ft_strchr("cspdiuxX", *format))
			{

			}
		}
		else if (*format != '%')
		{

		}
		format++;
	}
}

int ft_printf(char const *format, ...)
{
	va_list args;
	int	res;

	res = 0;
	va_start(args, format);
	
	va_end(args);
	return (0);
}