#include <stdio.h>
#include "ft_printf.h"

int main(void)
{   
    char a;
	char *str;
	int max_int;
	int	min_int;
	int neg_int;
	double	dec_int;
	unsigned int uns_int;
	unsigned int u_int_0;
	unsigned int hex;

	max_int = 10000;
	min_int = -2147483648;
	neg_int = -20;
	dec_int = 42.42;
	uns_int = -10;
	u_int_0 = 0;
	a = 'a';
	str = "ola q ase";
	hex = -1;

    // ft_printf("Char test: %c", a);
    // printf("\n");
	// ft_printf("String test: %s", str);
    // printf("\n");
	// ft_printf("Max int test: %i", max_int);
	// printf("\n");
	// ft_printf("Min int test: %i", min_int);
	// printf("\n");
	// ft_printf("Negative int test: %i", neg_int);
	// printf("\n");
	// ft_printf("Decimal int test: %d", dec_int);
	// printf("\n");
	// ft_printf("Unsigned int 0 test: %u", u_int_0);
	// printf("\n");
	ft_printf("Unsigned int test: %u", uns_int);
	printf("\n");
	printf("Printf Unsigned int test: %u", uns_int);
	printf("\n");
	// ft_printf("Hexadecimal x test: %x", hex);
	// printf("\n");
	// printf("Printf Hexadecimal x test: %x", hex);
	// printf("\n");
	// ft_printf("Hexadecimal X test: %X", hex);
	// printf("\n");
	// printf("Printf Hexadecimal X test: %X", hex);
	// printf("\n");
    /*
	ft_printf("%c\n", a);
    printf("%c\n", a);
	ft_printf("flag ftsc %s %c \n", s, a);
	printf("flag pP %p \n", &x);
	ft_printf("flag ftD %d \n", -10);
	printf("flag Df %d \n", -10);
	ft_printf("flag ftx %x \n", &h);
	printf("flag px %x \n", &h);
	ft_printf("flag ftX %X \n", &h);
	printf("flag ftX %X \n", &h);
    */
    return (0);
}