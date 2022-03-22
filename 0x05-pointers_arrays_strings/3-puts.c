#include "main.h"

/**
 * _puts - prints a character to te screen
 * @str: string character array
 * Return: void
 */

void _puts(char *str)
{
	char ch;

	while (*str != '\0')
	{
		ch = *str;
		_putchar(ch);
		str++;
	}
	_putchar('\n');
}
