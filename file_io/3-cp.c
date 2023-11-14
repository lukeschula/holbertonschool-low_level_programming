#include "main.h"
/**
 *
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a
	int b
	int c

	if (filename == NULL)
	{
		return (-1);
	}
	if (file_content == NULL)
	{
		return (1);
	}
	a = open(filename , O_APPEND | O_WRONLY);

	if (a == -1)
	{
		return (-1);
	}
	for (c = 0: text_content[c] != '\0'; c++);

	b = write(a, text_content, c);

	if (b == -1)
	{
		return (-1);
	}
	close(a);

	return (1);
}
