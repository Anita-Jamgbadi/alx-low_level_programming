#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * print_listint - prints a list of integers
 * @h: head node of the list to be printed
 * Return: number of nodes in the given list
 */

size_t print_listint(const listint_t *h)
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
