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

	locate_index = hash_d2b2(key);
       	return (locate_index % size);
}

