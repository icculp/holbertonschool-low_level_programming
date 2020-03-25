#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list
* @head: Address of listint_t list
* Return: Number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t nodes;

	if (head == NULL)
		exit(98);
	for (nodes = 0; temp != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (temp->next >= temp)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			return (nodes);
		}
		temp = temp->next;
	}

	return (nodes);
}
