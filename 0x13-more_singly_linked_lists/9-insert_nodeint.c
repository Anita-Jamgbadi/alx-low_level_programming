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
	listint_t *newNode, *temp, *temp2;
	unsigned int nodeCount, zero;

	if (*head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	temp = *head;

	nodeCount = zero = 0;
	while (nodeCount < idx)
	{
		temp = temp->next;
		nodeCount++;
	}
	if (idx > nodeCount || idx < zero)
		return (NULL);

	temp2 = *head;
	nodeCount = 0;
	while (nodeCount < (idx - 1))
	{
		temp2 = temp2->next;
		nodeCount++;
	}

	newNode->n = n;
	newNode->next = temp2->next;
	temp2->next = newNode;

	return (newNode);
}
