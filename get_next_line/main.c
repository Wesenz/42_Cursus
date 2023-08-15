#include "get_next_line.h"

int main()
{
	int fd;
	int i;
	char *line;

	i = 0;
	fd = open("pantoja.txt", O_RDONLY);
	printf("FD Flag \n");
	while (i < 10)
	{
		line = get_next_line(fd);
		printf("return value %d: %s\n", i, line);
		free(line);
		i++;
	}
	close(fd);
	printf("Closed FD \n");
	return (0);
}