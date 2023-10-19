#include "lists.h"

/**
 * print_list - prints alist of all nodes
 * @h: arg
 *
 * Return: int
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		n++;
	}
	return(n);
}
