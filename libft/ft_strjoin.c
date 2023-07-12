/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:22:59 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/22 18:24:31 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	size_t		newstrlen;
	char		*newstr;

	i = 0;
	j = 0;
	newstrlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(newstrlen + 1);
	if (!newstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && i >= ft_strlen(s1))
	{
		newstr[i + j] = s2[j];
		j++;
	}
	newstr[newstrlen] = '\0';
	return (newstr);
}
