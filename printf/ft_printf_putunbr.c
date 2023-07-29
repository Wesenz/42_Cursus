#include "ft_printf.h"

void    ft_printf_putunbr(unsigned int nbr, int *input_len)
{
    char *itoa_str;

	itoa_str = ft_itoa(nbr);
	if (!itoa_str)
		return ;	
	if (nbr == 0)
	{
		ft_printf_putnbr(nbr, input_len);
		if (*input_len == -1)
		return ;
	}
    if (nbr > 0)
	{
		ft_printf_putstr(itoa_str, input_len);
		if (*input_len == -1)
		return ;
	}
    free(itoa_str);
}