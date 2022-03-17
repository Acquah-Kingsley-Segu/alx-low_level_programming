#include "main.h"

/**
 * print_square - print squares to the screen
 *@size: size of square
 * Return: void
 */

void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		row = 0;
		while (row < size)
		{
			col = 0;
			while (col < size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
