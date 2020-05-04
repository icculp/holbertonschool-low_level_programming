#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void pback(dlistint_t *h)
{
	dlistint_t *temp = h;

if (temp != NULL)
{
	while (temp->next != NULL)
		temp = temp->next;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
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
	int p;

    head = NULL;
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
p = delete_dnodeint_at_index(&head, 7);
    print_dlistint(head);
	pback(head);
printf("d %d\n", p);
    printf("-----------------\n");
p =    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
	pback(head);
printf("d %d\n", p);
    printf("-----------------\n");
p =    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
	pback(head);
printf("d %d\n", p);
    printf("-----------------\n");
p =    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
	pback(head);
printf("d %d\n", p);
    printf("-----------------\n");
p =    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
	pback(head);
printf("d %d\n", p);
    printf("-----------------\n");
 p =   delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
	pback(head);
printf("d %d\n", p);
    printf("-----------------\n");
p =    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
	pback(head);
printf("d %d\n", p);
    printf("-----------------\n");
p =    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
	pback(head);
printf("d1 %d\n", p);
    printf("-----------------\n");
p =    delete_dnodeint_at_index(&head, 0);
printf("d %d\n", p);
    printf("-----------------\n");
p =     delete_dnodeint_at_index(&head, 0);
printf("d %d\n", p);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}
