#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: points to the head of a linked list
 * Return: no of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
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
