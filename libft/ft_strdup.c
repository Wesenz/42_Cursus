#include "libft.h"

char *ft_strdup(const char *s)
{   
    size_t i;
    char *dup_mem;
    size_t size;

    i = 0;
    if(s == NULL)
        return (NULL);
    size = ft_strlen(s);
    dup_mem = (char *) malloc(sizeof(char *) * (size + 1));
    if(!dup_mem)
        return(NULL);
    while(i < size)
    {
        dup_mem[i] = s[i];
        i++;
    }
    dup_mem[i] = '\0';
    return(dup_mem);
}
/*
int main(void)
{
    char str[] = "abdscs";
    char str1[] = "1234";
    char str2[] = "ola q ase";
    char *str3 = '\0';
    char *str4 = NULL;

    printf("%s \n", ft_strdup(str));
    printf("%s \n", ft_strdup(str1));
    printf("%s \n", ft_strdup(str2));
    printf("%s \n", ft_strdup(str3));
    printf("%s \n", ft_strdup(str3));

    return (0);
}
*/