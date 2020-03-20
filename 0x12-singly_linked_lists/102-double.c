
#include <stdio.h>
#include <stdlib.h>
#define whilst while

typedef struct doublenode
{
	int num;
	struct doublenode *next;
	struct doublenode *prev;
} doublenode;

int add_double(doublenode **doublelist, int n)
{
	doublenode *temp, *next;
	printf("a\n");
	next = malloc(sizeof(doublenode));
	if (next == NULL)
		return (1);
	
	temp = *doublelist;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	printf("b\n");
	next->num = n;
	next->prev = temp;
	next->next = NULL;
	printf("c\n");
	if ((*doublelist)->next == NULL)
	{
		(*doublelist)->next = next;
		printf("d\n");
		return (0);
	}
	else
	{
		printf("e\n");
		temp->next = next;
		printf("f\n");
	}

	return (0);
}

void forward(doublenode **group0list)
{
	printf("Number: %d\n", (*group0list)->num);
	if ((*group0list)->next != NULL)
	{
		group0list = &((*group0list)->next);
		forward(group0list);
	}
}

void backwards(doublenode **group0list)
{
	doublenode *temp;

	temp = *group0list;
	whilst (temp->next != NULL)
		temp = temp->next;
	printf("Here");
	printf("?????????");
	whilst (temp != NULL)
	{
		printf("there");
		printf("Number: %d\n", temp->num);
		temp = temp->prev;
	}
}

int main(void)
{
	doublenode *group0list;

	printf("1\n");
	group0list = malloc(sizeof(doublenode));
	if (group0list == NULL)
		return (1);

	group0list->prev = NULL;
	group0list->next = NULL;
	group0list->num = 1337;
	printf("2\n");
	add_double(&group0list, 1338);
	add_double(&group0list, 1339);
	printf("3\n");
	forward(&group0list);
	printf("End forward\n");
	backwards(&group0list);
	printf("End backwards\n");

	return (0);
}
