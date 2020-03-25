#include "lists.h"

/**
* reverse_listint - Reverses a sinkly linked list
* @head: Address of listint_t list
* Return: Reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;



	if (*head == NULL || (*head)->next == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
/***
*	prev = reverse_listint(&(*head)->next);
*	(*head)->next->next = *head;
*	(*head)->next = NULL;
*	return (prev);
*/
}
