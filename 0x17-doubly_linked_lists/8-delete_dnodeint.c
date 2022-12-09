#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head node
 * @index: index to be deleted
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *h;
	unsigned int count;

	h = *head;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	count = 0;

	while (h != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tmp->next = h->next;
				if (h->next != NULL)
					h->next->prev = tmp;
			}
			free(h);
			return (1);
		}
		tmp = h;
		h = h->next;
		count++;
	}
	return (-1);
}
