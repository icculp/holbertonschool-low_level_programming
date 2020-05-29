#include <stdio.h>
#include <stdlib.h>
#include <string.h>


shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);


/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;





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
	return (created);
}


/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}


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


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

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
	if (ht->array[k] == NULL || strcmp(ht->array[k]->key, key) == 0)
	{
		if (ht->array[k] != NULL)
		{
			free(ht->array[k]->key), free(ht->array[k]->value);
			free(ht->array[k]);
		}
		ht->array[k] = new;
		new->next = NULL;
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
		new->next = ht->array[k];
		ht->array[k] = new;
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
	print("{");
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
* shash_table_print_rev - Prints a shash table reversed
* @ht: Head of sorted hash table
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	const shash_node_t *temp = NULL;
	int count = 0;

	if (ht == NULL)
		return;
	print("{");
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
* hash_table_delete - Deletes a hash table
* @ht: Head of table
*/

void shash_table_delete(shash_table_t *ht)
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
