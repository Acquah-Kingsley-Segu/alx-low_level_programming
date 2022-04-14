#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - gets operation to be performed
 * @s: operator passed
 *
 * Return: pointer to operator
 *
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);

	return (NULL);
}
