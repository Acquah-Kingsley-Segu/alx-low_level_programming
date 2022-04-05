#include <string.h>
#include <stdlib.h>

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
	char *ptr;

	unsigned int len = strlen(str);

	unsigned int i = 0;

	if (str == NULL)
		ptr = NULL;
	else
	{
		ptr = malloc(sizeof(str[i]) * (len - 1));

		if (ptr == NULL)
			return (NULL);

		while (i < len)
		{
			ptr[i] = str[i];
			i++;
		}
	}

	return (ptr);
}

