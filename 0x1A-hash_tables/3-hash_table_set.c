#include "hash_tables.h"

/**
* hash_table_set - Adds an element to a hash table
* @ht: Head of hashtable
* @key: Key values to insert
* @value: Value to insert
* Return: 1 on success, 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	k = key_index((const unsigned char *)key, ht->size);
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[k] == NULL)
	{
		ht->array[k] = new;
		new->next = NULL;
	}
	else
	{
		new->next = ht->array[k];
		ht->array[k] = new;
	}
	return (1);
}
