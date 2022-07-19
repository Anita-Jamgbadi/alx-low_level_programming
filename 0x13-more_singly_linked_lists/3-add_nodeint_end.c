#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: head node of given list
 * @n: int to be added to list
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *oldNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		oldNode = *head;
		while (oldNode->next != NULL)
		{
			oldNode = oldNode->next;
		}
		oldNode->next = newNode;
	}

	return (newNode);
}
