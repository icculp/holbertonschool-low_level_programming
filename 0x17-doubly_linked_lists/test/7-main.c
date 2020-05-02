#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void pback(dlistint_t *h)
{
	dlistint_t *temp = h;

	while (temp->next != NULL)
		temp = temp->next;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
}


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    insert_dnodeint_at_index(&head, 0, 4096);
    insert_dnodeint_at_index(&head, 2, 4091);
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    pback(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    pback(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
