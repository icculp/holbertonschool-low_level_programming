#include "hash_tables.h"

/**
* hash_table_get - Retrieves the value of a given key
* @ht: Head of hashtable
* @key: Key of pair to retrieve value for
* Return: The value of the key, if found, or NULL if not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return (NULL);
	k = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[k];
	if (ht->array[k] != NULL)
	{
		if (strcmp(key, ht->array[k]->key) == 0)
		{
			return (ht->array[k]->value);
		}
		else
		{
			while (temp != NULL)
			{
				temp = temp->next;
				if (strcmp(key, temp->key) == 0)
					return (temp->value);
			}
		}
	}
	return (NULL);
}
