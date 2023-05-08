#include "libft.h"
#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *sptr;

    i = 0;
    sptr = (unsigned char *)s;

    while(i < n)
    {
        if (sptr[i] == c)
        {
            return (&sptr[i]);
        }
        i++;
    }
    return (NULL);
}