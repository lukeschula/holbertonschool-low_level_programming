#include "main.h"
/**
 * main - a program that adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Error, if number contians symbol
 * followed by a new line, and return 1
 * no number is passed to the program, print 0
 * followed by a new line
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		
		c += atoi(argv[a]);
	}
	printf("%d\n", c);
	
	return (0);
}
