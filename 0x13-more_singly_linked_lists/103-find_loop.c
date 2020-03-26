#include "lists.h"

/**
* find_listint_loop - Finds a loop inside a listint_t list
* @head: Address of listint_t list
* Return: Address of node where loop starts, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1;
	listint_t *p2;

	if (head == NULL)
		return (NULL);
	p1 = head;
	p2 = head;
	while (p2->next != NULL && p2->next->next != NULL)
	{
		p1 = p1->next;
		p2 = p2->next->next;
		if (p1 == p2)
		{
			p1 = head;
			while (p1 != p2)
			{
				p1 = p1->next;
				p2 = p2->next;
			}
			return (p2);
		}
	}
	return (NULL);
}
