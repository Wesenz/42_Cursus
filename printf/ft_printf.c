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

#include "libft.h"

static int format_checker(const char *format, va_list args, int *len)
{	
	int	checker;
	int i;

	checker = 0;
	i = 0;
	if (format[i] == '%')
	{
		len = len + ft_printc((char)va_arg(args, int));
	
	}
	else if (format[i] != '%')
	{
		i++;
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