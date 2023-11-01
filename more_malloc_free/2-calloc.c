#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - program startup
 * @nmemb: first int being evaluated
 * @size: second int being evaluated
 *
 * Description: allocates memory for an array using malloc)?
 * Return: return (0) is the required function signature
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *yoyo;
	char *coco;
	unsigned int rep;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	yoyo = malloc(size * nmemb);

	if (yoyo == NULL)
	{
		return (NULL);
	}
	coco = yoyo;

	for (rep = 0; rep < (size * nmemb); rep++)
	{
		coco[rep] = '\0';
	}
	return (yoyo);
}
