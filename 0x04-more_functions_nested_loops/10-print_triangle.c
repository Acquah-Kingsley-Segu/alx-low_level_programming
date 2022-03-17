#include "main.h"

/**
 * print_triangle - prints a triange
 * @size: the lenght of the triangle to draw
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 1, j, k;

	if (size > 0)
	{
		while (i <= size)
		{
			j = size - i;
			while (j)
			{
				_putchar(' ');
				j--;
			}

			k = i;
			while (k)
			{
				_putchar('#');
				k--;
			}
			_putchar('\n');

			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
