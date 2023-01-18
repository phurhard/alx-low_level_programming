#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: Entry to dll
 * @index: index to delete node
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *ptr;

	ptr = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	while (ptr->next != NULL)
	{
		if (counter == index)
		{
			ptr->next->prev = ptr->prev;
			ptr->prev->next = ptr->next;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		counter++;
	}
	return (-1);
}
