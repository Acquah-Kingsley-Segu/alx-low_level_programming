#include "main.h"

/**
 * times_table - prints 9 times table staring from 0
 *
 */

void times_table(void)
{
	int times_lim = 10;
	int i, j, time_num;

	for (i = 0; i < times_lim; i++)
	{
		for (j = 0; j < times_lim; j++)
		{
			time_num = i * j;
			if (time_num > 9)
			{
				_putchar('0' + (time_num / 10));
				_putchar('0' + (time_num % 10));
			}
			else
			{
				if (j > 0)
					_putchar(' ');
				_putchar('0' + time_num);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
