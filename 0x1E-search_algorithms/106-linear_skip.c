#include "search_algos.h"

/**
* linear_skip - skip list linear
* @list: Pointer to the list
* @value: Value to search for
* Return: A pointer to node or NULL
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp, *temp2;

	if (list == NULL)
		return (NULL);
	temp = list;
	while (temp->express)
	{
		printf("Value checked at index [%d] = [%d]\n",
			(int)temp->express->index, temp->express->n);
		if (temp->express->n >= value)
			break;
		temp = temp->express;
	}
	if (temp->express && temp->express->n == value)
		return (temp->express);
	if (temp->express)
		printf("Value found between indexes [%d] and [%d]\n",
			(int)temp->index, (int)temp->express->index);
	else
	{
		temp2 = temp;
		while (temp2->next)
			temp2 = temp2->next;
		printf("Value found between indexes [%d] and [%d]\n",
			(int)temp->index, (int)temp2->index);
	}
	while (temp->next && temp->next->n < value)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [%d] = [%d]\n", (int)temp->index, temp->n);
	if (temp->next && temp->next->n == value)
	{
		printf("Value checked at index [%d] = [%d]\n",
			(int)temp->next->index, temp->next->n);
		return (temp->next);
	}
	return (NULL);
}
