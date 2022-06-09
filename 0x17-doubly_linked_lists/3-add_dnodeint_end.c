#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds node to the end of a list
 * @head: pointer to a head pointer of a list
 * @n: number to add
 *
 * Return: pointer to new list
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL || node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		node->prev = temp;
		temp->next = node;
		node->next = NULL;
	}
	return (*head);
}
