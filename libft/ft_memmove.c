/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:43:58 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/12 19:44:04 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The memmove() function copies n bytes from memory area src to
       memory area dest.  The memory areas may overlap: copying takes
       place as though the bytes in src are first copied into a
       temporary array that does not overlap src or dest, and the bytes
       are then copied from the temporary array to dest. */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{   
    size_t i;
    char *dpt;
    const char *spt;

    i = 0;
    dpt = (char *) dest;
    spt = (const char *) src;

    if (dest == src)
    {   
        return(dest);
    } 
    else if (dest < src)
    {   while (i < n)
        {
            dpt[i] = spt[i];
            i++;
        }
    }
    return(dest);
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
