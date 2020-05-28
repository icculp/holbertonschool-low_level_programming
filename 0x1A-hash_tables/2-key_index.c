#include "hash_tables.h"

/**
* key_index - Returns the index of a given key
* @key: Key of key/value pair
* @size: Size of array in hash table
* Return: Index of key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = hash_djb2(key);

	i %= size;
	return (i);
}
