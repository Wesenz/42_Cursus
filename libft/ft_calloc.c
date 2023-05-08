/*DESCRIPTION:
The calloc() function contiguously allocates enough space for count
objects that are size bytes of memory each and returns a pointer to the
allocated memory. The allocated memory is filled with bytes of value
zero.*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    size_t size_arr;
    void *arrpt;

    size_arr = count * size;
    arrpt = malloc(size_arr);
    if (arrpt == NULL)
    {
        return(0);
    }else
    {
        ft_memset(arrpt, 0, size_arr);
    }
    return(arrpt);
}

int main()
{
    int a = 5;
    int len = 5;
    printf("%p \n", ft_calloc(a, len));

    return(0);
}