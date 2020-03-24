#include "lists.h"

/**
* sum_listint - Sums all the numbers in a listint_t list
* @head: Address of listint_t list
* Return: Sum of nodesu
*/

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

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
