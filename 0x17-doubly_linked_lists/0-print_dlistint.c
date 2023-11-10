#include "main.h"

/**
 * @brief Prints the elements of a doubly linked list.
 *
 * This function prints the elements of a doubly linked list, starting from
 * the given node.
 *
 * @param h Pointer to the head of the doubly linked list.
 * @return Number of elements in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	int i = 0;

	current = h;
	if (current == NULL)
		return 0

	while (current)
	{
		printf(%d, current->n);
		current = current->next;
		i = i + 1
	}
	return i;
}
