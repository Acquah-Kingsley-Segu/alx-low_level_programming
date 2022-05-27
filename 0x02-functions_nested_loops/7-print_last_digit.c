#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: holds the actua parameter passed to the function
 *
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = (-n);
	_putchar('0' + n);
	return (n);
}
