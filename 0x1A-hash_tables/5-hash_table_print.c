#include "hash_tables.h"

/**
* hash_table_print - Prints a hash table
* @ht: Head of hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *temp = NULL;
	hash_node_t *t = NULL;
	unsigned long int i;
	int c = 0;

	if (ht == NULL)
		return;
	temp = ht;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (temp->array[i] != NULL)
		{
			t = temp->array[i];
			while (t != NULL)
			{
				if (c > 0)
					printf(", ");
				printf("'%s': '%s'", t->key, t->value);
				t = t->next;
				c++;
			}
		}
	}
	printf("}\n");
}
