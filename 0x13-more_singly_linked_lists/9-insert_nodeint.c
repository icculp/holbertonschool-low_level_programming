#include "lists.h"

/**
* insert_nodeint_at_index - Interts a new node at given position
* @head: Address of listint_t list
* @idx: Index where to insert node
* @n: Value to give new node
* Return: Sum of nodesu
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	current = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = current;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current->next;
	current->next = new;
	return (new);
}
