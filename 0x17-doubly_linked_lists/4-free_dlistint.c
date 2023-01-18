#include "lists.h"
/**
 * free_dlistint - Frees a double node
 * @head: link to the list
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
