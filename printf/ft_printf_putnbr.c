#include "ft_printf.h"

void	ft_printf_putnbr(int nbr, int *input_len)
{	
	if (nbr == -2147483648)
		ft_printf_putstr("-2147483648", input_len);
	if (nbr < 0 && nbr != -2147483648)
	{
		ft_printf_putchar('-', input_len);
		nbr = -nbr;
	}
	if (nbr >= 10) 
	{
		ft_printf_putnbr(nbr / 10, input_len);
		ft_printf_putnbr(nbr % 10, input_len);
	}
	if (nbr < 10 && nbr != -2147483648) 
		ft_printf_putchar(nbr + 48, input_len);
	if (*input_len == -1)
		return ;
}