#include "lists.h"

/**
 *sum_listint - sum of listint
 *
 *@head: first node
 *
 *Retrun: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
