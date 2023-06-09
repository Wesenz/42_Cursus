/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:23:24 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/13 13:12:41 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_split(char **newstr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(newstr[i]);
		i++;
	}
	free(newstr);
	return (NULL);
}

static int	words(const char *s, char c)
{
	int	trigger;
	int	words;

	trigger = 0;
	words = 0;
	while (*s != '\0')
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			words++;
		}
		else if (*s == c)
		{
			trigger = 0;
		}
		s++;
	}
	return (words);
}

static char	*cpy_letters(const char *s, int start, int end)
{
	char	*letters;
	int		i;

	i = 0;
	if (!s)
		return (0);
	letters = malloc((end - start + 1) * sizeof(char));
	if (!letters)
		return (NULL);
	while (start < end)
		letters[i++] = s[start++];
	letters[i] = '\0';
	return (letters);
}

static char	**splitter(const char *s, char c, char **newstr)
{
	size_t	i;
	int		j;
	int		trigger;

	i = 0;
	j = 0;
	trigger = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && trigger < 0)
			trigger = i;
		else if ((s[i] == c || i == ft_strlen(s)) && trigger >= 0)
		{
			newstr[j] = cpy_letters(s, trigger, i);
			if (!newstr[j])
				return (free_split(newstr, j));
			trigger = -1;
			j++;
		}
		i++;
	}
	newstr[j] = 0;
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;

	newstr = malloc((words(s, c) + 1) * sizeof(char *));
	if (!s || !newstr)
		return (NULL);
	return (splitter(s, c, newstr));
}
