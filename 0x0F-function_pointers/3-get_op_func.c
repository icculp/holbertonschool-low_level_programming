#include "3-calc.h"

/**
* get_op_func - Selects correct function to use
* @s: String for get_op_function
* Return: Pointer to func to use
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
			};
	int i;

	while (ops[i].op != NULL)
	{
		if ((strcmp(s, ops[i].op)) == 0)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
