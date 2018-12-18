#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	int	fd = 0;
	char *line = NULL;

	fd = open(av[1], O_RDONLY);
	while ((get_next_line(fd, &line)) > 0)
	{
	   dprintf(1, "%s\n", line);
	   free(line);	
	}
}
