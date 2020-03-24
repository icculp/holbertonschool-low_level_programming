#include "lists.h"

/**
* add_nodeint_end - Adds a new node at end of listint_t list
* @head: Head of list struct
* @n: Number to add to end of listint_t list
* Return: Address of new element, or NULL on failure
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (temp);
}
