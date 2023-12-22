#include "hash_tables.h"
/**
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int x;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (flag == 1)
				printf(", ");

			new_node = ht->array[x];
			while (new_node != NULL)
			{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				if (new_node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
