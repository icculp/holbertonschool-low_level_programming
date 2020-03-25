#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list
* @h: Address of listint_t list
* Return: Number of nodes in the list
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h;
	size_t nodes;

	if (*h == NULL || h == NULL)
		return (0);
	for (nodes = 0; temp != NULL;)
	{
		nodes++;
		temp = (*h)->next;
		free(*h);
		*h = temp;
		if (temp ==  NULL)
		{
			printf("(nil), (nil)\n");
			return (nodes);
		}
	}

	return (nodes);
}
