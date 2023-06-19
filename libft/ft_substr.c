/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:00:50 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/17 18:31:16 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{	
	size_t	i;
	char	*substr;

	i = 0;
	if (ft_strlen(s) < start)
	{
		substr = (char *)malloc(sizeof(char) * 1);
		if(!substr)
			return(NULL);
		substr[0] = '\0';
		return (substr);
	}
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
		substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[i + start] != '\0' && i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int main(void)
{
	char src[] = "test0 test1 test2";
	unsigned int start = 6;
	size_t len = start;

	printf("%s", ft_substr(src, start, len));
	return (0);
}*/
