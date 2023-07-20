/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:52:03 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/12 16:54:45 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*f(unsigned int i, char chr)
{
	char	*c;

	c = &chr;
	if (*c >= 41 && *c <= 90 && i != 0)
		*c = *c + 32;
	else
		*c = *c - 32;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*newstr;

	i = 0;
	len = ft_strlen(s);
	newstr = ((char *)malloc(sizeof(char) * len + 1));
	if (!s || !newstr || !f)
		return (0);
	while (i < len)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
