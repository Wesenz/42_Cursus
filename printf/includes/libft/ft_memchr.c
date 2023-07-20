/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:09:44 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/12 19:50:23 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			return ((void *)&sptr[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *src = "/|\x12\xff\x09\x42\042\42|\\";
	char src1 [] = "iawhf\200wf208awfh\xakufi21f4\x42w7fwa1f";
	int size = 12;

	printf("M: %s \n", ft_memchr(src, '\x42', 10));
	printf("R: %s \n", memchr(src, '\x42', 10));

	printf("M: %s \n", (char*)ft_memchr(src1, '\x42', sizeof(src1)));
	printf("R: %s \n", (char*)memchr(src1, '\x42', sizeof(src1)));

	printf("200: %s \n", ft_memchr(src, '\200', size));
	printf("200: %s \n", memchr(src, '\200', size));

	printf("0: %p \n", (char*)ft_memchr(src, '\0', 12));
	printf("0: %p", (char*)memchr(src, '\0', 12));
}*/
