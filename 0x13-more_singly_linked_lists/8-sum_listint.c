#include "lists.h"

/**
 * sum_listint - calculates the sum
 * @head: first node in the linked list
 *
 *  Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tempnode = head;

	while (tempnode)
	{
		total += tempnode->n;
		tempnode = tempnode->next;
	}
	return (total);
}
