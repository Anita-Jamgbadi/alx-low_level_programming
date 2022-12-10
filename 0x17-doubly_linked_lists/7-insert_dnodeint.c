#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at specific index
 * @h: points to head
 * @idx: list position
 * @n: data to be inserted
 * Return: address of new node or Null
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *head;
	unsigned int count;

	tmp = NULL;
	if (idx == 0)
		tmp = add_dnodeint(h, n);
	else
	{
		head = *h;
		count = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (count == idx)
			{
				if (head->next == NULL)
					tmp = add_dnodeint_end(h, n);
				else
				{
					tmp =  malloc(sizeof(dlistint_t));
					if (tmp != NULL)
					{
						tmp->n = n;
						tmp->next = head->next;
						tmp->prev = head;
						head->next->prev = tmp;
						head->next = tmp;
					}
				}
				break;
			}
			head = head->next;
			count++;
		}
	}
	return (tmp);
}
