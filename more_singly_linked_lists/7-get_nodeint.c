#include "lists.h"
/**
 *
 *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	
	if (head == NULL)
	{
		while (head != NULL)
		{
			if (x == index)
				return (head);

			head = head->next;
			n++;

		}
	}
	return (NULL);
}

	
