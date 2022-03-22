#include "main.h"
#include <string.h>

/**
 * puts_half - prints characters starting from half
 * @str: character array
 * Return: void
 */

void puts_half(char *str)
{
	int len_2 = (strlen(str)) / 2;

	int len = strlen(str);

	str = &str[len_2];

	while (len_2 < len)
	{
		_putchar(*str);
		len_2++;
		str++;
	}
	_putchar('\n');
}
