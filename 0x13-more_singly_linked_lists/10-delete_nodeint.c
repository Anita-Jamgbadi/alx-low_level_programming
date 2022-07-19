#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specified index
 * @head: list to be handled
 * @index: index to be deleted
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, zero;
	listint_t *temp, *newNode, *deleteMe, *holder;

	if (*head == NULL)
		return (0);

	zero = 0;
	if (index < zero)
		return (0);
	temp = *head;
	if (index == zero)
	{
		newNode = temp->next;
		free(temp);
		*head = newNode;
		return (1);
	}

	i  = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (index > i)
		return (0);
	i = 0;
	temp = *head;
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp->next->next == NULL)
	{
		deleteMe = temp->next;
		free(deleteMe);
		return (1);
	}
	deleteMe = temp->next;
	holder = deleteMe->next;
	temp->next = holder;
	free(deleteMe);
	return (1);
}
	




