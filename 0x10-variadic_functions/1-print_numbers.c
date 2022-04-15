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

	va_start(opt, n);

	for (i = 0; i < n - 1; i++)
	{
		num = va_arg(opt, int);
		if (separator != NULL)
			printf("%d%c", num, *separator);
	}

	num = va_arg(opt, int);
	printf("%d", num);

	va_end(opt);

	printf("\n");

}
