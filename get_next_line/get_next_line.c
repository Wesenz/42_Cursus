#include "get_next_line.h"

static char	*extract_line(char *storage)
{
	int		i;
	char	*line;

	i = 0;
	if (storage[0] == '\0')
		return (NULL);
	while (storage[i] && storage[i] != '\n')
		i++;
	if (storage[i] == '\0')
		line = malloc(sizeof(char) * (i + 1));
	else
		line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
	{
		line[i] = storage[i];
		i++;
	}
	if (storage[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char *read_buffer(int fd, char *storage)
{   
    printf("TMP Malloc FLAG \n");
    int i;
    char *tmp;

    i = 0;
    tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!tmp)
        return (free_buffer(storage));
    while (storage && !ft_strchr(storage, '\n'))
    {   
        i = read(fd, tmp, BUFFER_SIZE);
        if (i < 0)
        {   
            free(tmp);
            return(NULL);
        }
        printf("TMP Print: %s \n", tmp);
        tmp[i] = '\0';
        storage = ft_strjoin(storage, tmp);
    }
    free(tmp);
    tmp = NULL;
    printf("Storage Print: %s \n", storage);
    return (storage);
}

char    *get_next_line(int fd)
{
    char        *line;
    static char *storage;
    if (BUFFER_SIZE < 0 || fd < 0)
        return (NULL);
    printf("GNL ENGAGED \n");
    if (!storage || !ft_strchr(storage, '\n'))
    {
		storage = read_buffer(fd, storage);
        printf("%s \n", storage);
    }
	if (!storage)
		return (NULL);
    line = extract_line(storage);
    if (!line)
	{
		free(storage);
		storage = NULL;
		return (NULL);
	}
    return (line);
}