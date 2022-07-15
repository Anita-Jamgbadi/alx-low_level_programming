#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a node to the beginning of a given list
 * @head: ptr to ptr
 * @str: beginning of list
 * Return: ptr to new first element on the modified list
 */

list_t *add_node(list_t **head, const char *str)
{
	char *strCpy;
	list_t *newNode;

	strCpy = strdup(str);
	
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strCpy;
	newNode->len = strlen(strCpy);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
