#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a certain index
 * @head: first node in the linked list
 * @index: index of the node to return
 *  Return: pointer to the node we're looking for, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tempnode = head;

	while (tempnode && i < index)
	{
		tempnode = tempnode->next;
		i++;
	}
	return (tempnode ? tempnode : NULL);
}
