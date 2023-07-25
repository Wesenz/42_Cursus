#include "ft_printf.h"

void    ft_putstr(char *str)
{
    if (!str)
        ft_putstr("(null)");
    while (*str != '\0')
    {
        ft_putchar(*str);
        if (ft_putchar == -1)
            return ;
        str++;   
    }
}