#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if(to_find[0] == '\0')
	{
		return (str);
	}
	while(str[i] != '\0')
	{	
		j = 0;
		while(str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if(to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[50] = "Encuentra coin la coincidencia asdfasrew";
	char	str2[50] = "coincidencia";

	printf("%s \n", ft_strstr(str1, str2));
	printf("%s \n", strstr(str1, str2));
	return (0);
}*/