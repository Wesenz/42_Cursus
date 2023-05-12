/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:09:44 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/10 13:12:34 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *i;
    size_t j;
    i = (unsigned char*)s;
    j = 0;
    while (j<n)
    {
        if(i[j] == (unsigned char)c)
            return ((void*)&i[j]);
        j++;
    }
    return (NULL);
} */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sptr;
	size_t			i;

	sptr = (unsigned char *)s;
	i = 0;
	

	while (i < n)
	{
		if (sptr[i] == (unsigned char)c)
		{
			return ((void*)&sptr[i]);
		}
		i++;
	}
	return (NULL);
}

/*  int	main(void)
{
	char *src = "/|\x12\xff\x09\x42\042\42|\\";
	int size = 10;
	printf("M: %s \n", (char*)ft_memchr(src, '\x42', size));
	printf("R: %s", (char*)memchr(src, '\x42', size));
}  */