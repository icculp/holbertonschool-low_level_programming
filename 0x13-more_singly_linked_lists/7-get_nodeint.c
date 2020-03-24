#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t list
* @head: Address of listint_t list
* @index: Index of node to be returned
* Return: Node requested
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
