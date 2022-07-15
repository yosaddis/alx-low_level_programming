#include"list.h"

/**
 * print_list - prints form linked list
 * @h: list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t list_size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		list_size++;
	}
	return (list_size);
}
