#include "main.h"
#include <stdio.h>
#include <stdlib.h>
i
/**
 * create_array - creates an array using whatever character provided
 * @size: size of array
 * @c: array filler
 * Return: pointer to the atsrt of size
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	for (i = 1; i < size + 1; i++)
	{
		ptr[i] = c;
	}
	ptr[i] = '\0';

	if (ptr != NULL)
		return (ptr);

	return (NULL);
}
