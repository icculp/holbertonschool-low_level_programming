#include "search_algos.h"

/**
* go_to_indx - helper function moves list to indx
* @list: original list
* @s: index to move to
* Return: Node at index
*/

listint_t *go_to_indx(listint_t *list, int s)
{
	listint_t *temp;

	temp = list;
	while ((int)temp->index != s && temp->next != NULL)
		temp = temp->next;
	return (temp);
}

/**
* mini - finds minimum of two values
* @a: first value
* @b: second value
* Return: minimum of thw two
*/

int mini(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
* jump_list - jump list on singly-linked list
* @list: Pointer to the list
* @size: Size of the array
* @value: Value to search for
* Return: A pointer to node or NULL
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp;
	int a = 0, s = 0;

	if (list == NULL)
		return (NULL);
	s = sqrt((int)size);
	temp = go_to_indx(list, s);
	printf("Value checked at index [%d] = [%d]\n", s, temp->n);
	while (temp->n < value)
	{
		a = s, s = s + sqrt((int)size), temp = list;
		while ((int)temp->index != s && temp->next != NULL)
			temp = temp->next;
		printf("Value checked at index [%d] = [%d]\n", s, temp->n);
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
		printf("Value checked at index [%d] = [%d]\n", a, temp->n), a++;
		temp = list;
		while ((int)temp->index != a && temp->next != NULL)
			temp = temp->next;
		if (a == mini(s, (int)size))
			break;
	}
	if (temp->n == value)
	{
		printf("Value checked at index [%d] = [%d]\n", a, temp->n);
		return (temp);
	}
	printf("Value checked at index [%d] = [%d]\n", a, temp->n);
	return (NULL);
}
