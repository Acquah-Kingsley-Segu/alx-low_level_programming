#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - loop through an array to be printed
 * @array: pointer to array to be printed
 * @size: size of the array
 * @action: function elements will be passed to
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i = 0;


	for (; i < size; i++)
	{
		(*action)(array[i]);
	}
}
