/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:32:57 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/15 17:49:46 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0')
	{	
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[50] = "Encuentra coin la coincidencia asdfasrew";
// 	char	str2[50] = "coincidencia";
// 	int len = 50;
// 	printf("%s \n", ft_strnstr(str1, str2, len));
// 	printf("%s \n", strnstr(str1, str2, len));
// 	return (0);
// }
