#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints elements in a linked list
 * @h: pointer to list head
 *
 * Return: number if elements in the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (size);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size += 1;
	}
	return (size);
}
