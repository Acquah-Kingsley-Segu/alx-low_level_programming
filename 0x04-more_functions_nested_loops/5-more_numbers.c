#include "main.h"

/**
 * more_numbers - prints 0 to 14 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j, first, last;

	while (i < 10)
	{
		j = 0;

		while (j < 15)
		{
			if (j > 9)
			{
				first = j / 10;

				last = j - (first * 10);

				_putchar(48 + first);
				_putchar(48 + last);
			}
			else
			{
				_putchar(48 + j);
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
