#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list,
 *and returns the head node’s data (n)
 *
 *@head: first node
 *Return: 0 if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t st;
	int i;

	if (head == NULL || *head == NULL)
		return (0);

	st = *head;
	*head = st->next;
	i = st->n;
	free(st);
	return (i);
}
