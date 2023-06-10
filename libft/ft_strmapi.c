#include "libft.h"

char    *f(unsigned int i, char chr)
{   
    char    *c;

    i = i;
    c = &chr;
    if (*c >= 41 && *c <= 90)
        *c = *c + 32;
    else
        *c = *c - 32;
    return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  len;
    size_t  i;
    char *newstr;
    
    i = 0;
    len = ft_strlen(s);
    newstr = ((char *)malloc(sizeof(char) * len + 1));
    if (!s || !newstr || !f)
        return(0);
    while (i < len)
    {
        newstr[i] = f(i, s[i]);
        i++;
    }
    newstr[i] = '\0';
    return(newstr);
}