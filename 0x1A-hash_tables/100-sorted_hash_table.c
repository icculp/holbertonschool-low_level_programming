#include "hash_tables.h"

/**
* shash_table_create - Creates a sorted hash table
* @size: Size of array to make
* Return: Created hash table, or NULL on failure
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *created = NULL;
	unsigned long int i = 0;

	created = malloc(sizeof(shash_table_t));
	if (created == NULL)
		return (NULL);
	created->size = size;
	created->array = malloc(sizeof(shash_node_t *) * size);
	for (i = 0; i < size; i++)
	{
		created->array[i] = NULL;
	}
	created->shead = NULL;
	created->stail = NULL;
	return (created);
}

/**
* sortedinsert - Inserts node into dlist of sorted hash table
* @h: Head of sorted hash table
* @new: New node to add to shash table
* @ht: head of table
*/

void sortedinsert(shash_node_t *h, shash_node_t *new, shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int c;

	if (h == NULL)
	{
		h = new;
		ht->shead = new;
	}
	else if (strcmp(h->key, new->key) > 0)
	{
		new->snext = h;
		new->snext->sprev = new;
		ht->shead = new;
		h = new;
	}
	else
	{
		temp = h;
		while (temp->snext != NULL)
		{
			if (temp->snext->key != NULL)
				c = strcmp(temp->snext->key, new->key);
			else
				break;
			if (c < 0)
				temp = temp->snext;
			else
				break;
		}
		new->snext = temp->snext;
		if (temp->snext != NULL)
			temp->snext->sprev = new;
		temp->snext = new;
		new->sprev = temp;
	}
	temp = h;
	while (temp->snext != NULL)
		temp = temp->snext;
	ht->stail = temp;
}

/**
* shash_table_set - Adds an element to a shash table
* @ht: Head of shashtable
* @key: Key values to insert
* @value: Value to insert
* Return: 1 on success, 0 on failure
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k;
	shash_node_t *new = NULL, *temp = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	k = key_index((const unsigned char *)key, ht->size);
	new->key = strdup(key), new->value = strdup(value);
	new->sprev = NULL, new->next = NULL;
	if (ht->array[k] == NULL || strcmp(ht->array[k]->key, key) == 0)
	{
		if (ht->array[k] != NULL)
		{
			free(ht->array[k]->key), free(ht->array[k]->value);
			free(ht->array[k]);
		}
		ht->array[k] = new, new->next = NULL;
		sortedinsert(ht->shead, ht->array[k], ht);
	}
	else
	{
		temp = ht->array[k];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				free(new->key), free(new->value);
				free(new);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		new->next = ht->array[k], ht->array[k] = new;
		sortedinsert(ht->shead, new, ht);
	}
	return (1);
}


/**
* shash_table_get - Retrieves the value of a given key
* @ht: Head of hashtable
* @key: Key of pair to retrieve value for
* Return: The value of the key, if found, or NULL if not found
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int k;
	shash_node_t *temp = NULL;

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


/**
* shash_table_print - Prints a shash table
* @ht: Head of hash table
*/

void shash_table_print(const shash_table_t *ht)
{
	const shash_node_t *temp = NULL;
	int count = 0;

	if (ht == NULL)
		return;
	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		count++;
	}
	printf("}\n");
}


/**
* shash_table_print_rev - Prints a shash table reversed
* @ht: Head of sorted hash table
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	const shash_node_t *temp = NULL;
	int count = 0;

	if (ht == NULL)
		return;
	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		count++;
	}
	printf("}\n");
}


/**
* shash_table_delete - Deletes a hash table
* @ht: Head of table
*/

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *a, *t;
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
