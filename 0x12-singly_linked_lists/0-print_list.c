#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>


/**
 * print_list - prints the elements of a given list
 * @h: head of the list to be printed
 * Return: Number of nodes on the list
 */

size_t print_list(const list_t *h)
{
	int elements;

	if (h == NULL)
		return (0);

	elements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			elements++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			elements++;
		}
		h = h->next;
	}
	return (elements);
}
