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

int main(int argc, char **argv)
{
	int i;

	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("%d\n", sum);
	}

	return (0);
}
