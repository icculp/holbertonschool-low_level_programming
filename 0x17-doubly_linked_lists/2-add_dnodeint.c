#include "lists.h"

/**
* add_dnodeint - Adds a new node at beginning of doubly linked list
* @head: Double pointer to head of list
* @n: Number alue to add to node
* Return: Address of new node or NULL on failure
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	temp = *head;
	new->next = temp;
	temp->prev = new;
	*head = new;
	return (new);
}
