#include "lists.h"

/**
 *add_node - function
 *@head : pointer poiner
 *@str : string
 *Return: newnode address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
