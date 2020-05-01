#include "lists.h"

/**
* sum_dlistint - Returns sum of all data in dlistint_t list
* @head: Pointer to head of list
* Return: Sum or 0 if empty
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
