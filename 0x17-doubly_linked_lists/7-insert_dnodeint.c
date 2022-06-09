#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at the specified index
 * @h: pointer to head pointer of a list
 * @idx: position to insert
 * @n: data of node
 *
 * Return: head of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trav = *h, *node = malloc(sizeof(dlistint_t));
	
	if (h == NULL || *h == NULL)
		return (NULL);
	node->n = n;
	while (trav != NULL)
	{
		if (idx == 1)
		{
			(trav->next)->prev = node;
			node->next = trav->next;
			node->prev = trav;
			trav->next = node;
			break;
		}
		trav = trav->next;
		idx--;
	}
	if (trav == NULL && idx < 1)
		return (NULL);
	return (*h);
}
