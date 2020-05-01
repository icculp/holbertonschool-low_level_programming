#include "lists.h"

/**
* insert_dnodeint_at_index = Inserts a new node at given index
* @h: Double pointer to head of list
* @idx: Index of where to insert node
* @n: Data to insert into node
* Return: Address of new node, of NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	temp = *h;
	new->n = n;
	while (temp != NULL)
	{
		if (i == idx)
		{
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
