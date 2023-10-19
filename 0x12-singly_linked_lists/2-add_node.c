#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: arg1
 * @str: arg2
 *
 * Return: 
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int length = 0;

	while (str[length])
	{
		length++;
	}

	newNode = malloc(sizeof(list_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->length = length;
	newNode->next = *hesd;
	*head = newNode;
	return (*head);
}
