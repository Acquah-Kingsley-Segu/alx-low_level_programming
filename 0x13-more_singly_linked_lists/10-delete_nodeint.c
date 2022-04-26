#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node
 * @head: pointer to head pointer
 * @index: position to delete
 *
 * Return:
 *	1 if successful
 *	-1 if not successful
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}
