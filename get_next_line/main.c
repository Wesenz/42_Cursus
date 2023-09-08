#include "get_next_line.h"

int main()
{
	int fd;
	int i;
	char *line;

	i = 0;
	fd = open("pantoja.txt", O_RDONLY);
	while (i < 10)
	{
		line = get_next_line(fd);
		printf("return value %d: %s\n", i, line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}