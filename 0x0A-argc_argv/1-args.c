#include <stdio.h>

/**
 * main - prints number of argument passed to it
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argv++;

	printf("%d\n", argc - 1);
	return (0);
}
