#include "hash_tables.h"
/**
 *
 *
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{	
	unsigned int locate_index;

	locate_index = hash_djb2(key);
       	return (locate_index % size);
}

