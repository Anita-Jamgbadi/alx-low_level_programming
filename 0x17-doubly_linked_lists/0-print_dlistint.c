#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dlistint - prints a list
 * @h: points to the head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int elements;

	if (h == NULL)
		return (0);
	elements = 0;
	while (h != NULL)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
			elements++;
		}
		h = h->next;
	}
	return (elements);
}
