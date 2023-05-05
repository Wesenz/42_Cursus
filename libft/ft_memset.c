/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:48:16 by marcfer2          #+#    #+#             */
/*   Updated: 2023/05/05 16:48:19 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *sptr;

    i = 0;
    sptr = (unsigned char *) s;

    while (i < n)
    {
        sptr[i] = c;
        i++;
    }
    return(s);
}
