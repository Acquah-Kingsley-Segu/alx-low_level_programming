#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: array of bits to convert
 *
 * Return:
 *	decimal equivalence
 *	OR
 *	0 if @b is NULL or char in b is not 0 or 1
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int size = 0, decimal = 0;
	unsigned int i = 0;

	while (b[i] != '\0')
	{
		i++;
	}
	size = i;

	i = 0;
	while (size >= 1)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			decimal += (b[i] - 48) << (size - 1);
			i++;
			size -= 1;
		}
		else
			return (0);
	}
	return (decimal);
}
