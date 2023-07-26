/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbrbase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:57:29 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/26 17:57:31 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printf_putnbr_base(int nbr, int *wrd_len)
{	
	if (wrd_len == -1)
		return ;
	if (nbr >= 10)
	{
		if (nbr < 10)
		{
			nbr = nbr % 10;
			ft_printf_putchar(nbr + 48, *wrd_len);
		}
		nbr = nbr / 10;
		ft_printf_putchar(nbr + 48, *wrd_len);
	}
}
