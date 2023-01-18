#include "lists.h"
/**
 * dlistint_len - calculates total number of elements in a dlist
 * @h: Header node
 * Return: Returns the no of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
