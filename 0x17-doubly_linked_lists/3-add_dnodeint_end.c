#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the beginning of a dlist
 * @head: the first node
 * @n: value to enter
 * Return: The address of the input
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	ptr = *head;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	temp->prev = ptr;
	ptr->next = temp;
	return (temp);
}
