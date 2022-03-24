#include "main.h"

/**
 * cap_string - capitalize string
 * @s: takes string
 * Return: return transformed string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s > 6 && *s < 14)
		{
			if (*s == '\t')
				*s = ' ';
			s++;
			*s = *s - 32;
		}
		else if (*s == ' ' || *s == '.')
		{
			s++;

			if (*s > 96 && *s < 123)
			{
				*s = *s - 32;
			}
		}

		s++;
	}

	return (s);
}
