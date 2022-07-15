#include "lists.h"

/**
 * list_len - return the no of elements
 * @h: linked list head
 * Return: integer
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
