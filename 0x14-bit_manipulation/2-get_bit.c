#include "main.h"
/**
 * get_bit - gets value of a bit at a given index
 * @n: decimal number
 * @index: index number to return bit
 *
 * Return: bit @index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
