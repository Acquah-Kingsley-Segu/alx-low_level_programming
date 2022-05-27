#include "main.h"

void print_time(int, int, int, int);

/**
 *  jack_bauer - prints the time 00:00 to 23:59
 *
 *  Return: void
 */

void jack_bauer(void)
{
	int hour = 0, min = 0;
	int f_hour = 0, s_hour = 0, f_min = 0, s_min = 0;

	while (hour < 24)
	{
		print_time(f_hour, s_hour, f_min, s_min);
		min++;
		if (min == 60)
		{
			hour += 1;
			min = 0;
		}
		if (min < 10)
		{
			f_min = 0;
			s_min = min;
		}
		else
		{
			s_min = min % 10;
			f_min = min / 10;
		}
		if (hour < 10)
		{
			f_hour = 0;
			s_hour = hour;
		}
		else
		{
			f_hour = hour / 10;
			s_hour = hour % 10;
		}
	}
}


/**
 * print_time - prints the time to the screen
 * @f_hour: first digit of hour
 * @s_hour: last digit of hour
 * @f_min: first digit of min
 * @s_min: last digit of main
 *
 * Return: void
 */

void print_time(int f_hour, int s_hour, int f_min, int s_min)
{
	_putchar('0' + f_hour);
	_putchar('0' + s_hour);
	_putchar(':');
	_putchar('0' + f_min);
	_putchar('0' + s_min);
	_putchar('\n');
}
