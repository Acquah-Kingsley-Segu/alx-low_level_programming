#include "main.h"

/**
 * _isalpha - checks whether a character enter is alpha or not
 * @c: formal parameter to hold the character to be checked
 * Return:
 *	1 if c is alpha
 *	0 if c is not alpha
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 97 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
