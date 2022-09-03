#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds node to the head of a list
 * @head: points to head node of list
 * @n: int to insert
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	temp = *head;

	if (temp != NULL)
		temp->prev = new_node;
	new_node->next = temp;
	*head = new_node;

	return (new_node);
}
