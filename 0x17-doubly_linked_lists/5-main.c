#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node, *Node, *nOde;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    Node = get_dnodeint_at_index(head,7);
    nOde = get_dnodeint_at_index(head, 10);
    printf("%d\n", node->n);
    printf("%d\n",Node->n);
    printf("%d\n",nOde->n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
