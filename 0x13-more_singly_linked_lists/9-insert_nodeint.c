#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: original list
 * @idx: index for insert
 * @n: data for insertion
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp, *temp2, *holder;
	unsigned int i, nodeCount, zero;

	if (*head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	temp = *head;
	nodeCount = zero = i = 0;
	newNode->n = n;
	if (idx < zero)
		return (NULL);
	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		nodeCount++;
	}
	if (idx > nodeCount)
		return (NULL);
	temp2 = *head;
	i = 0;
	while (i < idx - 1)
	{
		temp2 = temp2->next;
		i++;
	}
	if (idx == nodeCount)
	{
		holder = temp2->next;
		temp2->next = newNode;
		newNode->next = holder;
		return (newNode);
	}
	newNode->next = temp2->next;
	temp2->next = newNode;
	return (newNode);
}
