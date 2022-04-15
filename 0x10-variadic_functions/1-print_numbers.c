#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers seperated by a character
 * @separator: charactor to separate numbers
 * @n: numbers of parameters passed
 * @...: optional parameters
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list opt;

	unsigned int i;

	int num;

	char c = '\0';

	va_start(opt, n);

	if (separator != NULL)
		c = *separator;

	for (i = 0; i < n - 1; i++)
	{
		num = va_arg(opt, int);

		printf("%d%c", num, c);
	}

	num = va_arg(opt, int);
	printf("%d", num);

	va_end(opt);

	printf("\n");

}
