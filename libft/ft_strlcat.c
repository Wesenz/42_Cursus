/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:50:06 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/22 18:38:05 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!dstsize)
		return (srclen);
	while (src[i] != '\0' && dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	if (dstlen > dstsize)
		return (srclen + dstsize);
	return (srclen + dstlen);
}
/*
int main(void)
{	
	char str[] = "q ase";
	char dst[] = "ola ";
	int len = strlen(str);

	printf("%zu", ft_strlcat(dst, str, len));
	printf("%lu", strlcat(dst, str, len));
	return (0);
}
*/
