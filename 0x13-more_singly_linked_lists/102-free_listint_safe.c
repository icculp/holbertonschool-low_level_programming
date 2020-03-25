#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list
* @h: Address of listint_t list
* Return: Number of nodes in the list
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *arr[50];
	size_t nodes;
	unsigned int i;

	if (h == NULL || *h == NULL)
		return (0);
	if ((*h)->next == *h)
	{
		free(*h);
		*h = NULL;
		return (1);
	}
	for (nodes = 0; temp != NULL; nodes++)
	{
		for (i = 0; i < nodes; i++)
		{
			if (temp == arr[i])
				break;
		}
		if (i != nodes)
			break;
		arr[i] = temp;
		temp = temp->next;
	}
	for (i = 0; i < nodes; i++)
	{
		free(arr[i]);
	}
	*h = NULL;
	return (nodes);
}
