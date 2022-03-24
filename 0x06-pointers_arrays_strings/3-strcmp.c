#include "main.h"
#include <string.h>

/**
 * _strcmp - compares to strings
 * @s1: string being compared to
 * @s2: string used in the comparison
 * Return:
 *	> 0 if s1 > s2
 *	< 0 if s1 < s2
 *	= 0 id s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
