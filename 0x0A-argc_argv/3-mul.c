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

	int mul = 1;
	
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);	
		}

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}

	return 0;
}
