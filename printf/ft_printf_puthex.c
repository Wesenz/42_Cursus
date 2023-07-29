#include "ft_printf.h"

void    ft_printf_puthex(unsigned long nbr, char str, int *input_len)
{
    char    *hex;

    hex = "0123456789abcdef";
    if (nbr > 15)
    {
        ft_printf_puthex(nbr / 16, str, input_len);
        ft_printf_puthex(nbr % 16, str, input_len);
        if (*input_len == -1)
            return ;
    }
    else
    {
        if (str == 'x' || str == 'p' || nbr < 10)
            ft_printf_putchar(hex[nbr], input_len);
        else if (str == 'X')
            ft_printf_putchar(hex[nbr] - 32, input_len);
        if (*input_len == -1)
            return ;
    }
}