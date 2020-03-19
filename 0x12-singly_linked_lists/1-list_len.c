#include "lists.h"

/**
* list_len - Returns number of elements in linked list
* @h: Linked list struct
* Return: Number of nodes in the list
*/

size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
