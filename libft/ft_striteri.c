#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (!f || !s)
        return ;
    size_t  i;
    size_t  len;

    i = 0;
    len = ft_strlen(s);
    while (i < len)
    {
        f(i, &s[i]);
        i++;
    }
}
