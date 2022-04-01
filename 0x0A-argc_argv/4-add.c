#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers or 'Error'
 * @argc: number of parameters passed
 * @argv: parameters passed
 *
 * Return:
 *	0 if successful
 *	1 if not
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
