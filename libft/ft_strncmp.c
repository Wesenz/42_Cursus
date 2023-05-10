/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:30:34 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/09 15:51:51 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	size_t	i;

	i = 0;
	if ((unsigned char)s1[i] == '\0' || (unsigned char)s2[i] == '\0')
	{
		return (s1[i] - s2[i]);
	}
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && ((unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0') && i <= n)
	{
		i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
