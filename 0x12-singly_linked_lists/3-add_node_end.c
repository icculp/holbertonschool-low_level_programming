#include "lists.h"

/**
* add_node_end - Adds a new node to the end of a list_t
* @head: Head of linked list
* @str: Str values inside list
* Return: Address of new element, of NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int len = 0;

/** Find strlen */
	while (str[len])
		len++;
/** Add new node */
	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

/** Traverse to last node to append new to end */
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (temp);
}
