#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - fetches node at nth index
 * @head: head node
 * @index: index to search for
 * Return: address od index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (head == NULL || index < count)
		return NULL;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	free(temp);
	if (index > count)
		return NULL;
	count = 0;
	while (head != NULL)
	{
		if (index == count)
			return head;
		head = head->next;
		count++;
	}

	return NULL;
}

