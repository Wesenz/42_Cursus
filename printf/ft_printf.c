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

#include "includes/ft_printf.h"
#include "includes/libft/libft.h"

static int	check_letter(const char *format, va_list args, int *len)
{
	int	checker;

	checker = 0;

	if (*format == 'c')
		checker = checker + ft_printc((char)va_arg(args, int));
	/*
	else if (*format == 's')
		checker = checker + ft_prints(va_arg(args, char *));
	else if (*format == 'p')
		checker = checker + ft_printp(va_arg(args, unsigned long));
	else if (*format == 'd' || *format == 'i')
		checker = checker + ft_printdi(va_arg(args, int));
	else if (*format == 'u')
		checker = checker + ft_printu(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
	{}
	*/
	*len = checker;
	return (checker);
}

static int	percen_checker(const char *format, va_list args, int *len)
{	
	int i;

	i = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{	
			format++;
			if (ft_strchr("cspdiuxX", *format) && check_letter(format, args, len) != -1)
				i = i + *len;
			else if(*format == '%' && ft_printc('%') != -1)
				i++;
		}
		else if (ft_printc(*format) != -1)
			i++;
		else
			return (-1);
		format++;
	}
	*len = i;
	return (i);
}

int ft_printf(char const *format, ...)
{
	va_list args;
	int	len;

	len = 0;
	va_start(args, format);
	if (percen_checker(format, args, &len) == -1)
	{
		va_end(args);
		return (-1);
	}
	va_end(args);
	return (len);
}