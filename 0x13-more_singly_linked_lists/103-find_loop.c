#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slownode = head;
	listint_t *fastnode = head;

	if (!head)
	{
		return (NULL);
	}
	while (slownode && fastnode && fastnode->next)
	{
		fastnode = fastnode->next->next;
		slownode = slownode->next;
		if (fastnode == slownode)
		{
			slownode = head;
			while (slownode != fastnode)
			{
				slownode = slownode->next;
				fastnode = fastnode->next;
			}
			return (fastnode);
		}
	}
	return (NULL);
}
