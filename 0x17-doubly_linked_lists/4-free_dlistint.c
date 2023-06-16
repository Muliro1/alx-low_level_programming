#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempnode;

	while (head)
	{
		tempnode = head->next;
		free(head);
		head = tempnode;
	}
}
