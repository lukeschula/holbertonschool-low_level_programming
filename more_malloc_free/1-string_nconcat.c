#include "main.h"

#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings into a new string,
 * taking the first n from string 2. If n>strlen(s2),
 * use whole string s2.
 *
 * @s1: first string
 * @s2: second string
 * @n: number of characters to take from second string
 *
 * Return: new string, or null on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a1, a2, a3;
	char *tt, *bb;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	for (a1 = 0, tt = s1; *tt; tt++)
	{
		a1++;
	}
	for (a2 = 0, bb = s2; *bb; bb++)
	{
		a2++;
	}
	if (n > a2)
	{
		n = a2;
	}

	bb = malloc ((a1 + n + 1) * sizeof(char));
	if (!bb)
		return (0);
	tt = bb;
	while (*s1)
	{
		*tt++ = *bb++;
			a3 = 0;
	}
	while (a3 < n)
	{
		*tt++ = s2[a3];
	}
	*tt = 0;
	return (bb);
}
