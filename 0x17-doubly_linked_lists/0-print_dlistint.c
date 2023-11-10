#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int i = 0;

	current = h;
	if (current == NULL)
		return (0);

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i = i + 1;
	}
	return (i);
}
