#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at index
 * @head: Head of the node
 * @index: index to return
 * Return: Returns the node at such index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count =  0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
		if (count == index)
			return (temp);

	}
	if (index > count)
		return (NULL);
	return (temp);
}
