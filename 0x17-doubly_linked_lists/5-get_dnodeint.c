#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - return the nth node from a linked list
 * @head: head node of list
 * @index: 0-based position to retrieve
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;

	if (head == NULL)
		return (node);
	while (head != NULL)
	{
		if (index == 0)
		{
			node = head;
			break;
		}
		head = head->next;
		index--;
	}
	if (node == NULL && index <= 0)
		return (NULL);
	return (node);
}
