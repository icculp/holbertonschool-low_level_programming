#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at end of doubly linked list
* @head: Double pointer to head of list
* @n: Number alue to add to node
* Return: Address of new node or NULL on failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	new->next = NULL;
	return (new);
}
