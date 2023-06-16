#include "lists.h"
#include <stddef.h>
/**
 *  dlistint_len - returns the number of elements
 *  @h: linked list of type listint_t to traverse
 *  Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
