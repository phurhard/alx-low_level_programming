#include "lists.h"
/**
 * sum_dlistint - get the sum of all n in nodes
 * @head: Entry to node
 * Return: Returns sum of all values
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
