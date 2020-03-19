#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: Head of linked list
* @str: Str values inside list
* Return: Address of new element, of NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
