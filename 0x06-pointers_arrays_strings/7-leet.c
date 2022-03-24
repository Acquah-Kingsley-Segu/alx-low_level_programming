#include "main.h"

/**
 * leet - encodes vowels in string to numbers
 * @s: string to be encodes
 * Return: s pointer
 */

char *leet(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		while (*s == 'a' || *s == 'A')
		{
			*s = 48 + 4;
			break;
		}

		while (*s == 'e' || *s == 'E')
		{
			*s = 48 + 3;
			break;
		}

		while (*s == 'o' || *s == 'O')
		{
			*s = 48 + 0;
			break;
		}

		while (*s == 't' || *s == 'T')
		{
			*s = 48 + 7;
			break;
		}

		while (*s == 'l' || *s == 'L')
		{
			*s = 48 + 1;
			break;
		}

		s++;
	}

	return (s);
}
