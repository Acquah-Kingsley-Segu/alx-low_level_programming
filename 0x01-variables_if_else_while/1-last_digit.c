#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point for the program
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Changing number to positive i negative to get a positive last number*/
	if (n < 0)
		n *= -1;
	printf("Last digit of %d is ", n);
	int last_n_digit = n % 10;

	if (last_n_digit > 5)
		printf("%d and is greater than 5\n", last_n_digit);
	else if (last_n_digit < 6 && last_n_digit > 0)
		printf("%d and is less than 6 and not 0\n", last_n_digit);
	else if (last_n_digit == 0)
		printf("%d and is 0\n", last_n_digit);
	return (0);
}
