#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of the linked list
 * @head: head node
 * @n: int to be added
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;
	
	temp = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = temp;

	return (new_node);
}
