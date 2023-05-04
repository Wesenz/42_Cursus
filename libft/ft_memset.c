#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *sptr;

    i = 0;
    sptr = (char *) s;

    while (i < n)
    {
        sptr[i] = c;
        i++;
    }
    return(s);
}