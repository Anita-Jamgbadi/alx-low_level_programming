#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - points to a dupe of str
 * @str: points to string to be copied
 * Return: NULL or *ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;

	ptr = malloc(i * sizeof(char));

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}

	if (ptr != NULL)
		return (ptr);

	free(ptr);
	return (NULL);
}
