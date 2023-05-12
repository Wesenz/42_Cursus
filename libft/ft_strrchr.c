/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:12:29 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/09 15:50:32 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pt;
	int		len;

	len = ft_strlen(s);
	pt = (char *) s + len - 1;
	if (c == '\0')
	{
		return (pt);
	}
	while (len != 0)
	{
		if (*pt == c)
		{
			return (pt);
		}
		len--;
		pt--;
	}
	return (NULL);
}
