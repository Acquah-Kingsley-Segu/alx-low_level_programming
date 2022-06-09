#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	if (head == NULL || node == NULL)
		return;
	while (head->next != NULL)
	{
		node = head;
		head = node->next;
		free(node);
	}
	free(head);
}
