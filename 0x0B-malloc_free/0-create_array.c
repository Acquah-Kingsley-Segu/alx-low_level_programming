#include <stdlib.h>

/**
 * create_array - creates an array dynamically
 * @size: size of array to create
 * @c: memory size to allocate
 *
 * Return:
 *	pointer to array if successful
 *	NULL if not sucessful
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i = 0;

	if (size == 0)
		ptr = NULL;
	else
	{
		ptr = malloc(sizeof(c) * size);

		if (!ptr)
			return (NULL);
	}

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
