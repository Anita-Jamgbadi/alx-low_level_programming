#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * free_list - frees memory formerly allocated to a given list
 * @head: list to be deleted
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
