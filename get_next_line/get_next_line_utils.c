#include "get_next_line.h"

size_t  ft_strlen(char *str)
{
    size_t  i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	size_t		i;
	size_t		j;
	size_t		newstrlen;
	char		*newstr;

	i = 0;
	j = 0;
	newstrlen = ft_strlen(str1) + ft_strlen(str2);
	newstr = (char *)malloc(newstrlen + 1);
	if (!newstr)
		return (NULL);
	while (str1[i] != '\0')
	{
		newstr[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		newstr[i + j] = str2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return (newstr);
}

char	*ft_strchr(char *str, int c)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)str;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}

char    *free_buffer(char *read)
{
    free(read);
    read = NULL;
    return (read);
}
