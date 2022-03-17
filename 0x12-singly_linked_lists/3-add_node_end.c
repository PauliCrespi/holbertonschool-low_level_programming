#include "lists.h"

/**
 * add_node_end - adds node to end
 * @head: input
 * @str: input
 * Return: list.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, *last = *head;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (last == NULL)
		*head = newnode;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}

	return (newnode);
}
