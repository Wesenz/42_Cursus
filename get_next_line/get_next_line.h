#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 30
#endif

size_t  ft_strlen(char *str);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strjoin(char const *str1, char const *str2);
char    *free_buffer(char *read);
char    *get_next_line(int fd);

#endif