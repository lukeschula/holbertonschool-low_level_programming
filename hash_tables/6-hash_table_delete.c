#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head_node = ht;
	hash_node_t *new_node, *ptr;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			new_node = ht->array[x];
			while (new_node != NULL)
			{
				ptr = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				new_node = ptr;
			}
		}
	}
	free(head_node->array);
	free(head_node);
}
