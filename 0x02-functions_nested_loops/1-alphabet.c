#include "main.h"

/**
 * print_alphabet - prints the alphabet to stdout
 */

void print_alphabet(void)
{
	char str = 'a';

	while (str <= 'z')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
