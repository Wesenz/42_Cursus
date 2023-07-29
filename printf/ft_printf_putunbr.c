/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putunbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:41:23 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/29 14:41:24 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_putunbr(unsigned int nbr, int *input_len)
{
	if (nbr > 9)
	{
		ft_printf_putunbr(nbr / 10, input_len);
		if (*input_len == -1)
			return ;
		ft_printf_putunbr(nbr % 10, input_len);
	}
	else
		ft_printf_putchar(nbr + 48, input_len);
	if (*input_len == -1)
		return ;
    // char *itoa_str;

	// itoa_str = ft_itoa(nbr);
	// if (itoa_str == NULL)
	// {	
	// 	free(itoa_str);
	// 	return ;
	// }
    // if (nbr >= 0)
	// {
	// 	ft_printf_putstr(itoa_str, input_len);
	// 	if (*input_len == -1)
	// 	{
	// 		free(itoa_str);
	// 		return ;
	// 	}
	// }
	// if (*input_len == -1 || nbr < 0)
	// {
	// 	free(itoa_str);
	// 	return ;
	// }
    // free(itoa_str);
}
