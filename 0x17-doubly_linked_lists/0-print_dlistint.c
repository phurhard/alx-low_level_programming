#include "lists.h"
/**
 * print_dlistint - print the numbers of elements in a dlist
 * @h: double list head node
 * Description: Print elements and numbers of element in dlist
 * Return: Number of elements in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
