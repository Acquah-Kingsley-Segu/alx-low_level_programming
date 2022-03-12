#include <stdio.h>

/**
 * main - entry point for program
 * Return: 0 (Success)
 */

int main(void)
{
	char lower_alphabet = 'a', upper_alphabet = 'A';

	while (lower_alphabet <= 'z')
	{
		putchar(lower_alphabet);
		lower_alphabet++;
	}

	while (upper_alphabet <= 'Z')
	{
		putchar(upper_alphabet);
		upper_alphabet++;
	}
	putchar('\n');

	return (0);
}
