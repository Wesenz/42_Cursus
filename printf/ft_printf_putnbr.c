/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:41:10 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/29 14:41:11 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_putnbr(int nbr, int *input_len)
{	
	if (nbr == -2147483648)
		ft_printf_putstr("-2147483648", input_len);
	if (nbr < 0 && nbr != -2147483648)
	{
		ft_printf_putchar('-', input_len);
		nbr = -nbr;
		if (*input_len == -1)
			return ;
	}
	if (nbr >= 10)
	{
		ft_printf_putnbr(nbr / 10, input_len);
		if (*input_len == -1)
			return ;
		ft_printf_putnbr(nbr % 10, input_len);
		if (*input_len == -1)
			return ;
	}
	if (nbr < 10 && nbr != -2147483648)
	{
		ft_printf_putchar(nbr + 48, input_len);
		if (*input_len == -1)
			return ;
	}
}
