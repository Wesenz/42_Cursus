/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcfer2 <marcfer2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:15:34 by marcfer2          #+#    #+#             */
/*   Updated: 2023/07/26 14:15:36 by marcfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_printf_putstr(char *str, int *wrd_len)
{
    if (!str)
    {
        ft_printf_putstr("(null)", wrd_len);
        return ;
    }
    while (*str != '\0')
    {
        ft_printf_putchar(*str, wrd_len);
        if (*wrd_len == -1)
            return ;
        str++;   
    }
}
