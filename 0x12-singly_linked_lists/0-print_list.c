#include "lists.h"

/**
* print_list - Prints a linked list
* @h: Linked list struct
* Return: Number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
