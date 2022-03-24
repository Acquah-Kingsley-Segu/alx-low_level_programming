#include "main.h"

/**
 * _strncpy - copies a strimg into another for at most n bytes
 * @dest: destination pointer to be copied into
 * @src: source pointer
 * @n: copy byte limit
 * Return: @dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}



	return (dest);
}
