#include "lists.h"

/**
* free_listint2 - Frees a listint_t list and sets head to NULL
* @head: Head of list struct
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp->next != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	free(temp);
	*head = NULL;
}
