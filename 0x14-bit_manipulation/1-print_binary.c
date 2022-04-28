#include "main.h"

int significant_bit(unsigned long int);

/**
 * print_binary - prints binary equivalence of a number
 * @n: decimal number to be printed
 *
 */
void print_binary(unsigned long int n)
{
	int sig_bit = 0;
	unsigned long int bit_num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	sig_bit = significant_bit(n);
	while (n > 0 || sig_bit > 0)
	{
		bit_num = 1 << (sig_bit - 1);
		if (n >= bit_num)
		{
			_putchar('1');
			n -= bit_num;
		}
		else
			_putchar('0');
		sig_bit--;
	}
}

/**
 * significant_bit - get most significant bit
 * @num: decimal number being used
 *
 * Return: most significant bit
 */

int significant_bit(unsigned long int num)
{
	int sig_bit = 0; /* hold bit place as we traverse */
	unsigned long int bit_num = 1 << sig_bit; /* decimal num @sig_bit */

	if (num == 1)
		return (1);
	while (num >= bit_num)
	{
		sig_bit += 1;
		bit_num = 1 << sig_bit;
	}

	return (sig_bit);
}
