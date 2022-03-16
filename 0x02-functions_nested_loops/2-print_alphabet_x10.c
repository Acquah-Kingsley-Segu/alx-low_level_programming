#include "main.h"

/**
 * print_alphabet_x10 - print 10 sets of alphabets to the screen
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char str = 'a';

		while (str <= 'z')
		{
			_putchar(str);
			str++;
		}
		_putchar('\n');
		i++;
	}
}
