#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size to be allocated
 *
 * Return:
 *	pointer to allocated memory
 *	98 when unsuccessful
 *
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
