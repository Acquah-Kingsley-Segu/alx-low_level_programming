#include "lists.h"
#include <stdlib.h>

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
