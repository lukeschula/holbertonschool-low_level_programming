#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * size_t list_len - function that returns the number of elements in a linked list_t list.
 * 
 * @h: pointer to list_t
 *
 * Return: he number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	 size_t  count = 0;
	
	 while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
