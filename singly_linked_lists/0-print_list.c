#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * size_t print-list - Write a function that prints all the elements of a list_t list.
 *
 * @h: pointer to the head pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return(0);
	}
	

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}	 
