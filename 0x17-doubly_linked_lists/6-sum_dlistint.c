#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sums all data on the list
 * @head: points to the head of the list
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
