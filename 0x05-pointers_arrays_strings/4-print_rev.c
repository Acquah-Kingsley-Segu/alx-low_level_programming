#include <string.h>
#include "main.h"
/**
 * print_rev - prints characters in reverse
 * @s: string character array
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s);

	int i = len - 1;

	char *str = &s[len];

	while (i >= 0)
	{

		_putchar(*(--str));
		i--;
	}

	_putchar('\n');

}
