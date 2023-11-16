#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: first node of list
 * @str: added string
 * Return: address of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n_char;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;

	new_node->len = n_char;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
