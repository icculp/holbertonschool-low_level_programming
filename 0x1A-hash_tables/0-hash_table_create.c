#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table
* @size: Size of table to create
* Return: Pointer to new hash table, or NULL on failure
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *created = NULL;
	unsigned long int i = 0;

	created = malloc(sizeof(hash_table_t));
	if (created == NULL)
		return (NULL);
	created->size = size;
	created->array = malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < size; i++)
		created->array[i] = NULL;
	return (created);
}
