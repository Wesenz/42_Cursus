#include "libft.h"

char *ft_strdup(const char *s)
{   
    size_t i;
    char *dup_mem;
    size_t size;

    i = 0;
    size = strlen(s);
    dup_mem = (char *) malloc(sizeof(char *) * (size + 1));
    if(!dup_mem || *s == '\0')
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
    char str[] = "";
    char str1[] = "1234";
    char str2[] = "ola q ase";
    char str3[] = NULL;

    
    printf("%s \n", ft_strdup(str));
    printf("%s \n", ft_strdup(str1));
    printf("%s \n", ft_strdup(str2));
    printf("%s \n", ft_strdup(str3));

    return (0);
}
*/