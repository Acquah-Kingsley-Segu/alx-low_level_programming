#include "main.h"

/**
 * main - program entry point
 * Description: uses the main.h which contains the function prototype
 * of _putchar to print a string to the output character by charater
 * Return: 0 (Success)
 */

int main(void)
{
	char string[] = "_putchar";

	int i = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
