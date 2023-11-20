#include "lists.h"

/**
 *add_nodeint - add note at beginning
 *@head: head
 *@n: add the list
 *Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	if (head  == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
