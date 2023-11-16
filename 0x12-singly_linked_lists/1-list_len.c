#include "lists.h"

/**
 *list_len - function returns the number of elements in a linked list_t list
 *
 *@h: linked list
 *Return: no of elements
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
