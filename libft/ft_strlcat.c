/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:50:06 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/15 17:55:09 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize || dst == NULL || src == NULL)
	{
		return (ft_strlen(src));
	}
	if (!dst || !src || !dstsize)
	{
		return (0);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int main(void)
{	
	char *str = "q ase";
	char *dst = "ola ";
	int len = ft_strlen(str);

	printf("%s", ft_strlcat(dst, str, len));
	printf("%s", strlcat(dst, str, len));
	return (0);
}
