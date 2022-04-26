#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp = *head;
	unsigned int i = 0;
	
	if (*head == NULL)
	{
		free(temp);
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	newnode->n = n;

	while (i < idx-1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (*head);
}
