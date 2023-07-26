#include "ft_printf.h"

void	ft_printf_putnbr(int nbr, int *wrd_len)
{	
	if (nbr == -2147483648)
		ft_printf_putstr("-2147483648", wrd_len);
	if (nbr < 0) {
		ft_printf_putchar('-', wrd_len);
		nbr = -nbr;
	}
	if (nbr >= 10) {
		ft_printf_putnbr(nbr / 10, wrd_len);
		nbr = nbr % 10;
	}
	if (nbr < 10) 
		ft_printf_putchar(nbr + 48, wrd_len);
	if (*wrd_len == -1)
		return ;
}