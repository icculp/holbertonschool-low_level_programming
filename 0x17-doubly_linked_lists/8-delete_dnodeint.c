#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes a new node at given index
* @head: Double pointer to head of list
* @index: Index of node to delete
* Return: 1 on success, -1 on fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *temp, *next;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		prev = temp->prev;
		next = temp->next;
		if (index == 0)
		{
			if (temp->next != NULL)
			{
				next->prev = NULL;
				free(temp);
				*head = next;
				return (1);
			}
			else
			{
				*head = NULL;
				free(temp);
				return (1);
			}
		}
		if (i == index)
		{
			prev->next = next;
			if (temp->next != NULL)
				next->prev = prev;
			free(temp);
			temp = NULL;
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
