#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the length of a given list
 * @h: head node of a given list
 * Return: number of nodes in the list @h
 */

size_t listint_len(const listint_t *h)
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
