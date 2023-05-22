#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{   
    size_t  i;
    size_t  j;
    char    *newstr;
    
    i = 0;
    j = ft_strlen(s1) - 1;
    newstr = (char *)malloc(sizeof(char *) * (j + 1));
    if(!newstr)
        return (NULL);
    while (i != j)
    {
        if (s1[i] == *set)//(s1[i] >= 9 && s1[i] <= 13) || s1[i] == 32)
            i++;
        newstr[i] = s1[i]; 
        i++;
    }
    while (j != 0)
    {
        if (s1[j] == *set)
            j--;
        newstr[j] = s1[j];
        j--;
    }
    newstr[i - j] = '\0';
    return (newstr);
}
/*
int main(void)
{   
    char    str[] = "1 2 3\n4 5 6\t7 8 9\0";
    char    str1[] = "1 2 3 4 5 6 7 8 9";
    char    set[] = " ";

    printf("%s\n", ft_strtrim(str, set));
    return (0);
}*/