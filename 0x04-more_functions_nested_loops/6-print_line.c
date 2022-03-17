#include "main.h"

/**
 * print_line - draws a line.
 * @n: length parameter
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
