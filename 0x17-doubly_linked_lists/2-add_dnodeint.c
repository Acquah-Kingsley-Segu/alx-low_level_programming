#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to the beginneíng of the list
 * @head: pointer to a head pointer
 * @n: number as value
 *
 * Return: head of new list
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	node->n = n;
	if ((*head) == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		(*head)->prev = node;
		node->next = *head;
		node->prev = NULL;
		(*head) = node;
	}
	return (*head);
}
