#include "lists.h"

/**
* free_dlistint - Frees a dlistint_t list
* @head: Pointer to head of list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	if (head == NULL)
		return;
	temp = next = head;
	while (next->next != NULL)
	{
		next = next->next;
		free(temp);
		temp = next;
	}
	free(temp);
}
