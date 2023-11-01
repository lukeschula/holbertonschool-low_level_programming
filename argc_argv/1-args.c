#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * 
 * @argc: argument count 
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x = 0;
	int y = 0;

	for (x = argc - 1; *(argv + x) != *argv; x--)
		
		++y;
	printf("%d\n", y);

	return(0);
}
