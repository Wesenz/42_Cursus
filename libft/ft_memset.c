/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:48:16 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/09 15:25:14 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*sptr;
	size_t			i;

	i = 0;
	sptr = (unsigned char *) s;
	while (i < n)
	{
		sptr[i] = c;
		i++;
	}
	return (s);
}
