#include "main.h"
/**
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	char *str;
	int f;
	int l = 0;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f == -1)
	{
		return (-1);

	}
	if (text_content != NULL)
	{
		for (i = 0, str = text_content; *str; str++)

		i++;

		l = write(f, text_content, i);


	}
	if (close(f) == -1 || i != l)
	{
		return (-1);
	}
	return (1);

}
