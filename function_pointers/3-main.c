#include "3-calc.h"
/**
 * main - program start
 *
 * @argc: argument count
 * @argv: array
 *
 * Return: NULL
 *
 * Description: main function to bring all the file together
 *
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	ptr = argv[2];
	y = atoi(arg[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && y == 0) || (*op == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(x, y));
	return (0);
}
