#include "libft.h"
#include <stdio.h>

static int words(const char *s, char c)
{
    size_t          i;
    unsigned int    trigger;
    unsigned int    words;

    i = 0; 
    trigger = 0;
    words = 0;
    while(s[i] != '\0')
    {
        if(s[i] != c && trigger == 0)
        {
            trigger = 1;
            words++;
        }
        else if(s[i] == c)
        {
          trigger = 0;
        }
        i++;
    }
    return (words);
}

char **ft_split(char const *s, char c)
{
    size_t  i;
    size_t  j;
    size_t  slen;
    char    *newstr;

    slen = srtlen(s);
    newstr = (char *)malloc(sizeof(char *) * (slen + 1));

    while(i != slen)
    {
        if(s[i] == c)
        {   
            while(s[i] != c)
            {
                newstr[i - slen] = s[i];
            }
            i++;
        }
    }
    newstr[i - slen] = '\0';

    return (newstr);
/*
if ((s1[i] >= 9 && s1[i] <= 13) || s1[i] == 32)
        {
            j++;
        }
        else
        {
            newstr[i - j] = s1[i];
        }
*/
}

int main(void)
{
    char    str[] = "spliteame esta string peluca";
    char    c = " ";

    printf("%s\n", ft_split(str));

    return (0);
}