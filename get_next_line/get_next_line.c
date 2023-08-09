#include "get_next_line.h"

static char *read_line(char *storage)
{
    int i;
    char *line;

    i = 0;
    line = malloc(sizeof(char) * (i + 1));
    if (storage[0] == '\0')
        return (NULL);
    while (storage[i] != '\n')
    {
        if (storage[i] == '\n')
        {
           line[i] = storage[i];
        }  
        i++; 
    }
    return (line);
}

char    *get_next_line(int fd)
{
    char        *line;
    static char *storage;
    if (BUFFER_SIZE <= 0 || fd < 0)
    {
        free(storage);
        return (NULL);
    }
    if (!storage || (storage && !ft_strchr(storage, '\n')))
		storage = read_storage(fd, storage);
	if (!storage)
		return (NULL);
    
    line = read_line(storage);

    return (line);
}