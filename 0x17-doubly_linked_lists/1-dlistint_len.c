#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * dlistint_len - counts the number of elements in a list
 * @h: points to the list to be counted
 * Return: number of nodes in h
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nodeCount;

	if (h == NULL)
		return (0);

	nodeCount = 0;
	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
