#include "lists.h"

/**
* get_dnodeint_at_index - Returns nth node of dlistint_t list
* @head: Pointer to head of list
* @index: Index of node to return
* Return: Address of nth node, or NULL if doesn't exit
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp->next != NULL)
	{
		if (i == index)
			break;
		i++;
		temp = temp->next;
	}
	return (temp);
}
