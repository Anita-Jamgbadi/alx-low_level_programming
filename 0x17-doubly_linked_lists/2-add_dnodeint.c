#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node to the head of the list
 * @head: points to the head of the list
 * @n: new node to be added
 * Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	tmp = *head;
	newNode->next = tmp;

	if (tmp != NULL)
		tmp->prev = newNode;
	*head = newNode;
	return (newNode);
}
