#include <stdio.h>

void introduce_program(void);

/**
 * main - Write a beautiful code that passes the Betty checks
 * @argc: number of argument passed to executable
 * @argv: the data passed to executable
 *
 * Return: 0 on success
 *	  -1 otherwise
 */

int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
	{
		printf("Oops :(. Follow the instruction given.\n");
		introduce_program();
		return (-1);
	}

	while (i < argc)
	{
		argv++;
		printf("Message %d: %s\n", i, *argv);
		i++;
	}

	return (0);
}

/**
 * introduce_program - passes relevant info
 *
 */

void introduce_program(void)
{
	printf("Add a text after you specify ./objectcode\n");
}
