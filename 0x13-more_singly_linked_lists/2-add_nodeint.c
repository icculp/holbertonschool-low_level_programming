#include "lists.h"

/**
* add_nodeint - Adds a new node at beginning of listint_t list
* @head: Head of list struct
* @n: Number to add to beginning of listint_t list
* Return: Address of new element, or NULL on failure
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
