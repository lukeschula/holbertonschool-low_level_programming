#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 *
 * Description: Write a program that prints all arguments it receives
 * main print all arguments passed through argv/argc
 *
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
