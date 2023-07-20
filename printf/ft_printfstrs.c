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

#include "includes/printf.h"

void	ft_putchar(int c, int *counter)
{
	if (write(1, &c, 1) == -1)
		*counter = -1;
	else
		*counter++;
}



