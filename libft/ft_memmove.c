/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:43:58 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/15 17:23:05 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dpt;
	const char	*spt;

	i = 0;
	dpt = (char *) dest;
	spt = (const char *) src;
	if (dest < src)
	{
		while (i < n)
		{
			dpt[i] = spt[i];
			i++;
		}
	}
	if (dest > src)
	{
		while (n > i)
		{
			dpt[n - 1] = spt[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
int main()
{
    const char src [] = "Hello World";
    char dst [] = "";
    size_t len = strlen(src);

    printf("%p \n", ft_memmove(dst, src, len));
    printf("%s \n", src);
    printf("%s \n", dst);
    return(0);
}*/
