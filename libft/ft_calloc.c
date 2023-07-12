/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:02:47 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/09 15:53:55 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	size_arr;
	void	*arrpt;

	size_arr = count * size;
	arrpt = malloc(size_arr);
	if (arrpt == NULL)
	{
		return (0);
	}
	else
	{
		ft_memset(arrpt, 0, size_arr);
	}
	return (arrpt);
}
