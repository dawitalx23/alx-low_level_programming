#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: arg
 *
 * Return: int
 */

size_t list_len(const list_t *h)
{
	const list_t *s;
	int length = 0;

	s = h;

	while (s)
	{
		length++;
		s = s->next;
	}
	return (length);
}
