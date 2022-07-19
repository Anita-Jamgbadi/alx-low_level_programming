#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_node - deletes a node from a list
 * @head: list
 * @nodeCount: nodeCount
 * @index: index
 * Return: 1 or -1
 */

int delete_node(listint_t **head, unsigned int index, unsigned int nodeCount)
{
	unsigned int i, status;
	listint_t *temp, *deleteMe, *holder;

	i = 0;
	temp = *head;
	if (index == nodeCount)
	{
		while (i < index - 1)
		{
			temp = temp->next;
			i++;
		}
		deleteMe = temp->next;
		temp->next = NULL;
		free(deleteMe);
		status = 1;
		return (status);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	deleteMe = temp->next;
	holder = deleteMe->next;
	temp->next = holder;
	free(deleteMe);
	status = 1;
	return (status);
}

/**
 * delete_nodeint_at_index - deletes a node at a specified index
 * @head: list to be handled
 * @index: index to be deleted
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, nodeCount, zero, status;
	listint_t *temp, *holder;

	if (*head == NULL)
		return (-1);
	zero = nodeCount = i = 0;
	temp = *head;
	if (index == zero)
	{
		if (temp->next == NULL)
		{
			free(temp);
			return (1);
		}
		holder = temp->next;
		free(temp);
		*head = holder;
		return (1);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		nodeCount++;
	}
	if (index > nodeCount || index < zero)
		return (-1);
	i = 0;
	temp = *head;
	status = delete_node(head, index, nodeCount);
	return (status);
}
