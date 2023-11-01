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
	unsigned int len = n;
	unsigned int str;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (str = 0; s1[str]; str++)
	{
		len++;
	}

	s3 = malloc(sizeof(char) * (len + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (str = 0; s1[str]; str++)
	{
		s3[len++] = s1[str];
	}
	for (str = 0; s2[str] && str < n; str++)
	{
		s3[len++] = s2[str];
	}
	s3[len] = '\0';
	return (s3);
}


