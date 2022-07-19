#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * free_listint2 - free a list by setting head to NULL
 * @head: list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *realHead;

	if (*head == NULL)
		exit(0);

	realHead = *head;
	while (realHead != NULL)
	{
		temp = realHead;
		realHead = realHead->next;
		free(temp);
	}
	free(realHead);
	*head = NULL;
}
