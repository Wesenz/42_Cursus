/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:40:39 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/29 14:40:41 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_pointer(unsigned long str, int *input_len)
{
	ft_printf_putstr("0x", input_len);
	if (*input_len == -1)
		return ;
	ft_printf_puthex(str, 'p', input_len);
}
