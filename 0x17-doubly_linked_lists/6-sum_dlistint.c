#include "lists.h"

/**
 * sum_dlistint - calculates the sum
 * @head: first node in the linked list
 *
 *  Return: resulting sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *tempnode = head;

	while (tempnode)
	{
		total += tempnode->n;
		tempnode = tempnode->next;
	}
	return (total);
}
