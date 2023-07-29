/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:59:51 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/27 16:05:52 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	int_len(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(unsigned int n)
{
	char	*newstr;
	unsigned int		len;

	len = int_len(n);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	newstr[len] = '\0';
	if (n == 0)
		newstr[0] = '0';
	while (n > 0)
	{
		newstr[--len] = '0' + (n % 10);
		n = n / 10;
	}
	return (newstr);
}