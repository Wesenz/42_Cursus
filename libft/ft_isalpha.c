/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:38:52 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/03 13:00:53 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_isalpha(int c)
{
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int main()
{	
	int c;

	c = 'a';

	printf("%i", ft_isalpha(c));

	return(0);
}
