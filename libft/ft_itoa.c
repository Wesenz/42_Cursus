#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static long int int_len (int n)
{
    int    len;

    len = 0;
    if (n <= 0)
        len = 1;
    while(n != 0)
    {
        len++;
        n = n / 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *newstr;
    int     len;

    len = int_len(n);
    newstr = (char *)malloc(sizeof(char) * (len + 1));
    if (!newstr)
        return (NULL);
	newstr[len] = '\0';
    if (n == 0)
    {
        newstr[0] = 0 + 48;
    }
    while (n > 0)
    {
        newstr[--len] = 48 + (n % 10);
        n = n / 10;
    }
    return (newstr);
}
/*
int    main(void)
{    
    int n0 = 1234;
    // unsigned int n1 = -1234;
    // float n2 = 1.234;
    // long int n3 = 2147483647;

    printf("%s", ft_itoa(n0));
    // printf("%s", ft_itoa(n1));
    // printf("%s", ft_itoa(n2));
    // printf("%s", ft_itoa(n3));

    // printf("Itoa");

    // printf("%s", itoa(n0));
    // printf("%s", itoa(n1));
    // printf("%s", itoa(n2));
    // printf("%s", itoa(n3));
    return (0);
}*/