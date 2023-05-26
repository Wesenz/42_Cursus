/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:30:10 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/26 17:54:54 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1len;
	size_t	newlen;
	char	*newstr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	s1len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (s1len > i && ft_strchr(set, s1[s1len]) != NULL)
		s1len--;
	newlen = s1len - i + 1;
	newstr = (char *)malloc(sizeof(char) * newlen + 1);
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s1 + i, newlen);
	newstr[newlen] = '\0';
	return (newstr);
}
/*
int main(void)
{   
    char    str[] = "   1 2 3\n4 5 6\t7 8 9\0   ";
    char    str1[] = "   1 2 3 4 5 6 7 8 9   ";
    char    set[] = " ";

    printf("%s\n", ft_strtrim(str, set));
    printf("%s\n", ft_strtrim(str1, set));
    return (0);
}*/
