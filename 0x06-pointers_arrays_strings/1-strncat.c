#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate two string for n-bytes
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to concatenate at most
 * Return: @dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);

	int i = 0;

	while (i < n && *src != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
