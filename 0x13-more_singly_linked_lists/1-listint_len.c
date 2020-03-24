#include "lists.h"

/**
* listint_len - Returns the number of elements in a listint_t list
* @h: Head of list struct
* Return: Number of elements in list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
