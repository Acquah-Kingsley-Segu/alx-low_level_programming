#include "lists.h"

/**
 * list_len - counts the number of elements in a list
 * @h: head pointer of list to print
 *
 * Return: the number of elements in h
 *
 */

size_t list_len(const list_t *h)
{
	int numOfElem = 0;
	list_t temp = *h;

	while (temp.next)
	{
		numOfElem++;
		temp = *(temp.next);
	}
	numOfElem++;
	return (numOfElem);
}
