#include <stdio.h>

/**
 * main - entry point for program
 * Return: 0 (Success)
 */

int main(void)
{
	int number = 0, start = 48;

	while (number < 10)
	{
		putchar(number + start);
		number++;
	}
	putchar('\n');
	return (0);
}
