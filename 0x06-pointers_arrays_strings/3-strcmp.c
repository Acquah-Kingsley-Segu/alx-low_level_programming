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
	int s1_len = strlen(s1);

	int s2_len = strlen(s2);

	int ret_value = 0;

	if (s2_len > s1_len)
		ret_value = -15;
	else if (s1_len > s2_len)
		ret_value = 15;
	else
	{
		int i = 0;

		while (i < s1_len)
		{
			if (s1[i] != s2[i])
				return (s1 - s2);
			i++;
		}
	}

	return (ret_value);
}
