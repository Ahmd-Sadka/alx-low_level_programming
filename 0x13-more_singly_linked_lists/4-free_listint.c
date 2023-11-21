#include "lists.h"

/**
 *free_listint - free list
 *@head: first node
 *Reutn: no return
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
