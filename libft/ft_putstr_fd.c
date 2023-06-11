#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
    size_t  i;
    size_t  len;

    i = 0;
    len = ft_strlen(s);
    while (i < len)
    {
        write(fd, &s[i], 1);
        i++;
    }
}