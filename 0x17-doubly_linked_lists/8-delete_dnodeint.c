#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head node
 * @index: node to be deleted
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp, *adj_node, *t_head;

	if (head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (index > count)
		return (-1);

	count = 0;
	t_head = *head;
	while (t_head != NULL)
	{
		if (index == count)
		{
			adj_node = t_head->prev;
			adj_node->next = t_head->next;
			adj_node->prev = t_head->prev->prev;
			return (1);
		}
		t_head = t_head->next;
		count++;
	}
	return (-1);
}
