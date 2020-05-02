#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at given index
* @h: Double pointer to head of list
* @idx: Index of where to insert node
* @n: Data to insert into node
* Return: Address of new node, of NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (h == NULL || new == NULL)
		return (NULL);
	temp = *h, new->n = n;
	if ((temp == NULL) && (idx == 0))
	{
		new->prev = NULL, new->next = NULL;
		*h = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (idx == 0)
		{
			new->prev = NULL, new->next = temp;
			temp->prev = new;
			*h = new;
			return (new);
		}
		if (i == idx)
		{
			new->prev = temp->prev, new->next = temp;
			temp->prev->next = new;
			return (new);
		}
		i++;
		if ((i == idx) && (temp->next == NULL))
		{
			new->prev = temp, new->next = NULL;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
