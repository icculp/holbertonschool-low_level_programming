#include "lists.h"

/**
* pop_listint - Pops the first node of a listint_t list
* @head: Head of list struct
* Return: Value of first node.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val = 0;

	if (*head == NULL)
		return (val);

	val = (*head)->n;
	temp = (*head)->next;
	free(temp);
	*head = temp;

	return (val);
}
