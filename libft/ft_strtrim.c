#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{   
    size_t  i;
    size_t  j;
    size_t  s1len;
    char    *newstr;
    
    i = 0;
    j = 0;
    s1len = strlen(s1);
    newstr = (char *)malloc(sizeof(char *) * (s1len + 1));
    if(!newstr)
        return (NULL);
    while (i != s1len)
    {
        if ((s1[i] >= 9 && s1[i] <= 13) || s1[i] == 32)
        {
            j++;
        }
        else
        {
            newstr[i - j] = s1[i];
        }
        i++;
    }
    newstr[s1len - j] = '\0';
    return (newstr);
}
int main(void)
{   
    char    str[] = "1 2 3\n4 5 6\t7 8 9\0";
    char    str1[] = "1 2 3 4 5 6 7 8 9";
    char    set[] = " ";

    printf("%s\n", ft_strtrim(str, set));
    return (0);
}