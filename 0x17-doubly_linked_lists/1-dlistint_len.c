#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - finds the len of a list
 *
 * @h: pointer to head  node
 *
 * Return: length of h list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (size);
	while (h != NULL)
	{
		size += 1;
		h = h->next;
	}

	return (size);
}
