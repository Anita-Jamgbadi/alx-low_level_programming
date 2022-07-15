#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in any given linked list
 * @h: head of a linked list
 * Return: Number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	int elements;

	if (h == NULL)
		return (0);

	elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
