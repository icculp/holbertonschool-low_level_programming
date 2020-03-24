#include "lists.h"

/**
* delete_nodeint_at_index - Deletes a new node at given position
* @head: Address of listint_t list
* @index: Index where to insert node
* Return: Sum of nodes
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i;

	if (*head == NULL)
		return (0);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
			free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
