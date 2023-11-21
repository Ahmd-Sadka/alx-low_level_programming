#include "lists.h"

/**
 *sum_listint - sum of listint sum of all the data (n)
 *
 *@head: first node
 *
 *Return: sum or 0
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
