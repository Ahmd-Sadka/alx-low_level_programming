#include "lists.h"

/**
 *add_node_end - add node at tail
 *@head: firrst node of list
 *@str: string to add
 *Return: address of head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	size_t n_char;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;

	new_node->len = n_char;
	new_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (*head);
}
