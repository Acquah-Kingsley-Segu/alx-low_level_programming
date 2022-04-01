#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum coins to make change
 * @argc: parameter count
 * @argv: parameters passed
 *
 * Return:
 *	0 if successful
 *	1 if not
 *
 */

int main(int argc, char *argv[])
{
	int num;

	int coins[] = {25, 10, 5, 2, 1};

	int i = 0;

	int sum = 0;

	if (argc == 2)
	{
		num = atoi(argv[1]);

		while (i < 5)
		{
			if (num >= coins[i])
			{
				num -= coins[i];
				sum++;
				continue;
			}

			i++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
