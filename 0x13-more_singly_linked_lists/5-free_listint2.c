#include "lists.h"

/**
* free_listint2 - Frees a listint_t list and sets head to NULL
* @head: Head of list struct
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	(*head)->next = NULL;
	*head = NULL;
}
