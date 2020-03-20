#include "lists.h"

/**
* free_list - Frees a list_t list
* @head: Location of list_t start
*/

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		head = head->next;
		free(tmp);
	}
}
