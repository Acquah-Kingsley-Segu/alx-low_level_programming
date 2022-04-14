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
	return (malloc(b));	
}
