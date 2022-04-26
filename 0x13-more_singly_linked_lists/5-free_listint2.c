#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees memory space
 * @head: pointe to head pointer
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (*head == NULL)
		return;

	current = *head;

	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
