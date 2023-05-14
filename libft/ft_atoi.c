#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int res;
    int sign; 

    i = 0;
    res = 0;
    sign = 1;
    if(nptr == NULL)
        return (0);
    while(nptr[i] >= 9 && nptr[i] <= 13 && nptr[i] == 32)
        i++;
    while(nptr[i] == '-');
        sign *= -1;
    while(nptr[i] >= '0' && nptr[i] <= '9')
        res = res * 10 + nptr[i] - '0';
        i++;
    return (res * sign);
}
/*
int main(void)
{   
    char str[] = "    ----+--1234ad56";
    char str1[] = "\0\n-123\2004ad\t56";
    char str2[] = "";
    char *str3 = NULL;

    printf("%i \n", ft_atoi(str));
    printf("%i \n", ft_atoi(str1));
    printf("%i \n", ft_atoi(str2));
    printf("%i \n", ft_atoi(str3));

    return (0);
}*/