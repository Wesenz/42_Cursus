#include "ft_printf.h"

void    ft_printf_pointer(unsigned long str, int *input_len)
{
    ft_printf_putstr("0x", input_len);
    if (*input_len == -1)
        return ;
    ft_printf_puthex(str, 'p', input_len);
}