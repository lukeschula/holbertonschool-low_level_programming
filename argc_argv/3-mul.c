#include "main.h"
/**
 * main - a program that multiplies two numbers.
 *
 * @argc: argument count 
 * @argv: argument vector
 *
 * Return: Error If the program does not receive two arguments
 * followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n" , i);
		return (0);
	}
}	
