#include "main.h"
/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y;
	char *ptr;

	if (filename == NULL)
	{
		return (0);
	}
	ptr = malloc(sizeof(char) * letters);

	if (ptr== NULL)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);

	if (x == -1)
	{
		return (0);
	}
	y = read(x, ptr, letters);

	if (y == -1)
	{
		return (0);
	}
	y = write(STDOUT_FILENO, ptr, y;
	
	if (y == -1)
	
		return (0);
	

	close(x);

	return (y);
}

