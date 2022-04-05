#include <stdlib.h>

/**
 * alloc_grid - allocates a 2d array
 * @width: row
 * @height: column
 *
 * Return:
 *	pointer to 2d array if successful
 *	NULL if not successful
 *
 */

int **alloc_grid(int width, int height)
{
	int **arr;

	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(width * sizeof(int));

	if (!arr)
		return (NULL);

	for (; i < width; i++)
		arr[i] = malloc(height * sizeof(int));

	if (!arr[0])
		return (NULL);

	i = 0;

	for (; i < width; i++)
		for (j = i; j < height; j++)
			arr[i][j] = 0;


	return (arr);
}
