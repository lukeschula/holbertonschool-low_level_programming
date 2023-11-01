#include <stdio.h>
/**
 * main - hat prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 *
 * Desrciption: return value passed through
 * the main arg should be 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	{
		return (0);
	}
}
