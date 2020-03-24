#include "lists.h"

/**
* pop_listint - Pops the first node of a listint_t list
* @head: Head of list struct
* Return: Value of first node.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val = (*head)->n;

	if (head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	temp->next = NULL;
	free(temp);

	return (val);
}
