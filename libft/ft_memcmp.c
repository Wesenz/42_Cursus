#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{   
    size_t  i;
    unsigned char *s1ptr;
    unsigned char *s2ptr;

    s1ptr = (unsigned char *)s1;
    s2ptr = (unsigned char *)s2;
    i = 0;
    if (n == 0)
    {
        return (0);
    }
    while (i < n)
    {   
        if (s1ptr[i] != s2ptr[i])
        {
            return (s1ptr[i] - s2ptr[i]);
        }
        i++;
    }
    return (0);
}

// int main(void)
// {
//     char str1[] = "Hello world";
//     char str2 [] = "Hello World";
//     size_t len = strlen(str1);

//     printf("%u \n", ft_memcmp(str1, str2, len));

//     return (0);
// }