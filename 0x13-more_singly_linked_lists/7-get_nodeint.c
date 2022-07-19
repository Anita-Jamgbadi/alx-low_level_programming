#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - fetches the node at a given index on a list
 * @head: list
 * @index: node index
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeCount;
	listint_t *temp;
	listint_t *nthNode;

	if (head == NULL)
		return (NULL);

	nodeCount = 0;
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		nodeCount++;
	}
	if (index > nodeCount)
		return (NULL);

	nodeCount = 0;
	while (nodeCount < index)
	{
		head = head->next;
		nodeCount++;
	}
	nthNode = head;

	return (nthNode);
}
