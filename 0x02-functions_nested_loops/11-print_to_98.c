#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * @n: number to print from
 *
 */

void print_to_98(int n)
{
	int add;

	if (n < 98)
		add = 1;
	else
		add = -1;
	while (n != 98)
	{
		printf("%d, ", n);
		n += add;
	}
	printf("%d\n", n);
}
