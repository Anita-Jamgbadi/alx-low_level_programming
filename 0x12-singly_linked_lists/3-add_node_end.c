#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a given list
 * @head: given list
 * @str: String to be included in new node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *strCpy;
	list_t *newNode;
	list_t *lastNode;

	strCpy = strdup(str);
	if (strCpy == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strCpy;
	newNode->len = strlen(strCpy);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}

	return (newNode);
}
