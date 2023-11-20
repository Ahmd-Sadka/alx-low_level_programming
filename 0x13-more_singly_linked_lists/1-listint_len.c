#include "lists.h"

/**
 * listint_len - no of list nodes
 * @h: head pointer
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
