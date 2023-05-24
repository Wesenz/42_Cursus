#include "libft.h"
#include <stdio.h>
#include <string.h>

static int words(const char *s, char c)
{
    int    i;
    int    trigger;
    int    words;

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

static  char *cpy_letters(const char *s, int start, int end)
{
    char  *letters;
    int  i;

    i = 0;
    letters = malloc((end - start + 1) * sizeof(char));
    while (start < end)
    {
        letters[i++] = s[start++];

    }
    letters[i] = '\0';
    return (letters);
}

char    **ft_split(char const *s, char c)
{
    int  i;
    int  j;
    int trigger;
    int  slen;
    char    **newstr;

    i = 0;
    j = 0;
    trigger = -1;
    slen = strlen(s);
    newstr = malloc((words(s, c) + 1) * sizeof(char *));
    if (!s || !newstr)
        return (NULL);
    while(i <= slen)
    {
        if(s[i] != c && trigger < 0)
            trigger = i;
        else if (s[i] == c || (trigger >= 0 && s[i] == '\0'))
        {
            newstr[j] = cpy_letters(s, trigger, i);
            j++;
            trigger = -1;
        }
        i++;
    }
    newstr[j] = '\0';
    return (newstr);
    printf("Newstr: %s\n", *newstr);
}
/*
int main(void)
{
    char str[] = "spliteame esta string peluca";
    char c = ' ';
    char **result = ft_split(str, c);
    if (result != NULL)
    {
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }
    return 0;
}*/