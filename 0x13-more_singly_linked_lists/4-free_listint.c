#include "lists.h"
#include <stdlib.h>

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = malloc(sizeof(listint_t));
		temp = head;
		head = head->next;
		free(temp);
	}
}
