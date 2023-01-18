#include "lists.h"
/**
 * *add_dnodeint - adds a node at the beginning of a dlist
 * @head: the first node
 * @n: value to enter
 * Return: The address of the input
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		temp->n = n;
		temp->prev = NULL;
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->n = n;
		temp->next = *head;
		temp->prev = NULL;
		*head = temp;
	}
	return (temp);
}
