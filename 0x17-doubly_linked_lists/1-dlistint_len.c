#include "lists.h"

/**
* dlistint_len - Returns the number of elements in doubly linked list
* @h: Pointer to head of list
* Return: Number of nodes in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		/**printf("%d\n", temp->n);*/
		count++;
		temp = temp->next;
	}
	return (count);
}
