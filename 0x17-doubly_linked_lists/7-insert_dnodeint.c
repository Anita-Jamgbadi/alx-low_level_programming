#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: head node
 * @idx: index to insert
 * @n: int to insert at idx
 * Return: modified list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int count;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		temp = *h;
		count = 1;
		if (temp != NULL)
			while (temp->prev != NULL)
				temp = temp->prev;
		while (temp != NULL)
		{
			if (count == idx)
			{
				if (temp->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = temp->next;
						new_node->prev = temp;
						temp->next->prev = new_node;
						temp->next = new_node;
					}
				}
				break;
			}
			temp = temp->next;
			count++;
		}
	}
	return (new_node);
}
