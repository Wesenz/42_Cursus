/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:23:17 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/15 17:14:56 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign = -1;
		if (!(ft_isdigit(nptr[i])))
			return (0);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * sign);
}

// int main(void)
// {   
//     char str[] = "-4886";
//     char str1[] = "+548";
//     char str2[] = "-+48";
//     char *str3 = "--47";
//     char str4[] = "+47+5";
//     char str5[] = "-47-5";
//     char str6[] = "\t\n\r\v\f  469 \n";
//     char *str7 = "-2147483648";

//     printf("0 - %i\n", ft_atoi(str));
//     printf("1 - %i ft\n", ft_atoi(str1));
//     printf("2 - %i ft \n", ft_atoi(str2));
//     printf("3 - %i ft\n", ft_atoi(str3));
//     printf("4 - %i ft\n", ft_atoi(str4));
//     printf("5 - %i ft\n", ft_atoi(str5));
//     printf("6 - %i ft\n", ft_atoi(str6));
//     printf("7 - %i ft\n", ft_atoi(str7));

//     printf("0 - %i\n", atoi(str));
//     printf("1 - %i \n", atoi(str1));
//     printf("2 - %i \n", atoi(str2));
//     printf("3 - %i \n", atoi(str3));
//     printf("4 - %i \n", atoi(str4));
//     printf("5 - %i \n", atoi(str5));
//     printf("6 - %i \n", atoi(str6));
//     printf("7 - %i \n", atoi(str7));

//     return (0);
// }
