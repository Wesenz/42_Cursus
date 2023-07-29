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

int	ft_check_letter(char str, va_list args, int *input_len)
{
	if (str == 'c')
		ft_printf_putchar(va_arg(args, int), input_len);
	else if (str == 's')
		ft_printf_putstr(va_arg(args, char *), input_len);
	else if (str == 'd' || str == 'i')
		ft_printf_putnbr(va_arg(args, int), input_len);
	else if (str == 'u')
		ft_printf_putunbr(va_arg(args, unsigned int), input_len);
	else if (str == 'x' || str == 'X')
		ft_printf_puthex(va_arg(args, unsigned int), str, input_len);
	else if (str == 'p')
		ft_printf_pointer(va_arg(args, unsigned long), input_len);
	return (-1);
}

int ft_printf(char const *str, ...)
{
	va_list args;
	int	i;
	int	input_len;

	i = 0;
	input_len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_printf_putchar(str[i], &input_len);
		else if (str[i] == '%' && str[i + 1] != '\0')
		{
			ft_check_letter(str[i + 1], args, &input_len);
			i++;
		}
		i++;
		if (input_len == -1)
			return (-1);
	}
	va_end(args);
	return (input_len);
}