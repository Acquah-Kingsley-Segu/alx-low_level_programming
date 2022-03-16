#include "main.h"

/**
 * _abs - finds the absolute value of a number
 * @n: get the actual parameter passed
 *
 * Return: |n|
 *	-n if n < 0
 *	n if n > 0
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
