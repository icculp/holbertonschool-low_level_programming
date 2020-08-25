#include "search_algos.h"

/**
* linear_skip - skip list linear
* @list: Pointer to the list
* @value: Value to search for
* Return: A pointer to node or NULL
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	listint_t *temp;
	int a = 0, s = 0;

	if (list == NULL)
		return (NULL);
	s = sqrt((int)size);
	temp = go_to_indx(list, s);
	printf("Value checked array[%d] = [%d]\n", s, temp->n);
	while (temp->n < value)
	{
		a = s, s = s + sqrt((int)size), temp = list;
		while ((int)temp->index != s && temp->next != NULL)
			temp = temp->next;
		printf("Value checked array[%d] = [%d]\n", s, temp->n);
		if (s >= (int)size)
		{
			s = (int)size - 1;
			break;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", a, s);
	temp = list;
	while ((int)temp->index != a && temp->next != NULL)
		temp = temp->next;
	while (temp->n < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, temp->n), a++;
		temp = list;
		while ((int)temp->index != a && temp->next != NULL)
			temp = temp->next;
		if (a == mini(s, (int)size))
			break;
	}
	if (temp->n == value)
	{
		printf("Value checked array[%d] = [%d]\n", a, temp->n);
		return (temp);
	}
	printf("Value checked array[%d] = [%d]\n", a, temp->n);
	return (NULL);
}
