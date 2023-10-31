#include "3-calc.h"
/**
 * get_op_func - function to select correct function
 *
 * @s: operator passed through the argument
 * Return: 0
 *
 * Description: selects the correct function to perform
 * the operation asked by the user
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int n = 0;
	while (ops[n].op != NULL && *(ops[n].op) != *s)
	{
		n++;
	}
	return (ops[n].f);
}
