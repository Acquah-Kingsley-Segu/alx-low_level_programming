#include "main.h"

/**
 * print_diagonal - draws a line.
 * @n: length parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		while (i < n)
		{
			j = i;
			while (j)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
