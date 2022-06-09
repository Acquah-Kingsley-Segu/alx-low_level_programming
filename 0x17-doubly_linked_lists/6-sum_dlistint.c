#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - return sum of all n in list
 * @head: head pointer of list
 *
 * Return: sum of all head->n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *trav = head;

	if (head == NULL)
		return (sum);
	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
