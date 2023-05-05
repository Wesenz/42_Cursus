/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:30:34 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/03 17:30:36 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{	
	unsigned int i;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
	{
		return(s1[i] - s2[i]);
	}
	while(s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		i++;
	}
	return(s1[i] - s2[i]);
}