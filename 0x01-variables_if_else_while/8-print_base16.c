#include <stdio.h>

/**
 * main - entry point for program
 * Return: 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number <= 15)
	{
		if (number < 10)
		{
			putchar(number + 48);
		}
		else
		{
			putchar(number + 87);
		}
		number++;
	}
	putchar('\n');
	return (0);
}
