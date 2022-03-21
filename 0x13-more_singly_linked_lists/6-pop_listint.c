#include "lists.h"
/**
 *pop_listint - function
 *@head : pointer pointer
 *Return: the head node’s data (n) or zero is NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int result;

	result = (*head)->n;
	aux = (*head)->next;
	free(*head);
	*head = aux;
	return (result);
}
