/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:12:30 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/03 14:12:31 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr (const char *str, int c)
{
	char *pt;

	pt = (char *) str;
	while (*pt != '\0')
	{
		if (*pt == c)
		{
			return (pt);
		}
		pt++;
	}
	if (*pt == '\0' && c == '\0')
	{
		return (pt);
	}
	return(NULL);
}