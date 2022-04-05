#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - return pointer to a newly allocated space in memory
 * @str: string to duplicate
 *
 * Return:
 *	pointer to allocated memory if successful
 *	NULL if it was unsucessful
 *
 */

char *_strdup(char *str)
{

	int len, i = 0;

	char *ptr;

	if (!str)
		return (NULL);

	for (len = 1; str[len - 1] != '\0'; len++)
		;

	ptr = malloc(len * sizeof('a'));

	if (!ptr)
		return (NULL);

	for (; i < len; i++)
		ptr[i] = str[i];

	return (ptr);
}

