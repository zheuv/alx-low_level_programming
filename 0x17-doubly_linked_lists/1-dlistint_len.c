#include "lists.h"

/**
 * print_dlistint - print number of elements
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
        const dlistint_t *current;
        int i = 0;

        current = h;
        if (current == NULL)
                return (0);

        while (current)
        {
                current = current->next;
                i = i + 1;
        }
        return (i);
}

