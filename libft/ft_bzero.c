/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:48:42 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/05 16:48:43 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*sptr;

	i = 0;
	sptr = (char *) s;
	if (n == 0)
		return ;
	while (i < n)
	{
		sptr[i] = 0;
		i++;
	}
}
