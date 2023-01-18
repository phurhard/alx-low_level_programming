#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at specific index
 * @h: double pointer to head
 * @idx: index to inpurt node
 * @n: value to input
 * Return: list with insertednode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *ptr;
	unsigned int count = 1;

	ptr = *h;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (0);
	temp->n = n;
	if (idx == 0)
	{
		*h = temp;
		temp->next = ptr;
		temp->prev = NULL;
		ptr->prev = temp;
		return (temp);
	}
	while (ptr->next != NULL)
	{
		if (count == idx)
		{
			temp->prev = ptr;
			temp->next = ptr->next;
			ptr->next = temp;
			temp->next->prev = temp;
		}
		ptr = ptr->next;
		count++;
	}
	if (count == idx)
	{
		temp->prev = ptr;
		temp->next = NULL;
		ptr->next = temp;
	}
	if (count < idx)
	{
		free(temp);
		return (NULL);
	}
	return (temp);
}
