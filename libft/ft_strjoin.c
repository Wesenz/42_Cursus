#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    size_t  s1len;
    size_t  s2len;
    size_t  newstrlen;
    char    *newstr;
    
    i = 0;
    j = 0;
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    newstrlen = s1len + s2len;
    newstr = (char *)malloc(sizeof(char * ) * (newstrlen + 1));
    if(!newstr)
      return (NULL);
    while(s1[i] != '\0')
    {
        newstr[i] = s1[i];
        i++;
    }
    if(i == s1len)
      while(s2[j] != '\0')
      {
        newstr[i + j] = s2[j];
        j++;
      }
    newstr[newstrlen] = '\0';
    return(newstr);
}
/*
int main(void)
{
    char s1[] = "ola ";
    char s2[] = "q ase";

    printf("%s", ft_strjoin(s1, s2));
    return (0);
}*/