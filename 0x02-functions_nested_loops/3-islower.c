#include "main.h"

/**
 * _islower - checks whether a character is lower.
 * @c: formal parameter that holds the character to be checked
 * Return:
 *	1 if character is lowercase
 *	0 if character is not lowercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
