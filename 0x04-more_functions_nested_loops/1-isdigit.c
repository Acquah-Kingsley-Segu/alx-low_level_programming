#include "main.h"

/**
 * _isdigit - checks for digits.
 * @c: character parameter passed.
 * Return:
 *	1 if digit
 *	0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
