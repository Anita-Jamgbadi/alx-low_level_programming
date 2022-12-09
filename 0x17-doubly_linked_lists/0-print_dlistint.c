#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * print_dlistint - prints a doubly linked list in order
 * @h: points to the list to be printed
 * Return: an integer telling the size(length) of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nodeCount;

	if (h == NULL)
		return (0);
	nodeCount = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
