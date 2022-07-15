#include "lists.h"

/**
 * add_node - add node at the begining
 * @head: head of the linked list
 * @str: string contect
 * Return: address of the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t size;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (size = 0; str[size]; size++)
		;
	new_node->len = size;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
