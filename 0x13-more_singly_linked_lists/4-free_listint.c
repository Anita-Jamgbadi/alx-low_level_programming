#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - free any given list
 * @head: head node of a list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	int *ptr;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		ptr = &temp->n;
		free(ptr);
	}
}
