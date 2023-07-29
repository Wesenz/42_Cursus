/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:09:25 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/20 18:09:26 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_putchar(int c, int *input_len)
{
	if (write(1, &c, 1) == -1)
		*input_len = -1;
	else
		*input_len += 1;
}
