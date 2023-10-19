#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: arg1
 * @str: arg2
 *
 * Return: void
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp1, *tmp2;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	tmp1 = malloc(sizeof(list_t));
	if (tmp1 == NULL)
	{
		return (NULL);
	}
	tmp1->str = strdup(str);
	if (tmp1->str == NULL)
	{
		free(tmp1);
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	tmp1->len = length;
	tmp1->next = NULL;
	if (*head == NULL)
	{
		*head = tmp1;
		return (tmp1);
	}
	tmp2 = *head;
	while (tmp2->next)
	{
		tmp2 = tmp2->next;
	}
	tmp2->next = tmp1;
	return (tmp1);
}
