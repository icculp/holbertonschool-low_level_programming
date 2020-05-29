#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table
* @ht: Head of table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *a, *t;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		a = ht->array[i];
		if (a != NULL)
		{
			if (a->next == NULL)
			{
				if (a->key != NULL)
					free(a->key);
				if (a->value != NULL)
					free(a->value);
				if (a != NULL)
					free(a);
			}
			else
			{
				while (a != NULL)
				{
					t = a->next;
					if (a->key != NULL)
						free(a->key);
					if (a->value != NULL)
						free(a->value);
					free(a);
					a = t;
				}
			}
		}
	}
	free(ht->array);
	free(ht);
}
