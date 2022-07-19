#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum all data in the nodes of a given list
 * @head: head node of list
 * Return: sum of list data
 */

int sum_listint(listint_t *head)
{
	int nSum;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	nSum = 0;
	while (temp != NULL)
	{
		nSum += temp->n;
		temp = temp->next;
	}
	return (nSum);
}
