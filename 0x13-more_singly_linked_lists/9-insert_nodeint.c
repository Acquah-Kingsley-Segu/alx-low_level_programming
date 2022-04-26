#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: pointer to the head pointer of a list
 * @idx: position of insertion
 * @n: the element to be inserted
 *
 * Return: new list
 *
 */

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
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (*head);
	}
	while (i < idx - 1)
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
