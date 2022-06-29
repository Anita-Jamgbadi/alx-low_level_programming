#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width of array
 * @height: height of array
 * Return: NULL or *ptr
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;
	int var, size;

	var = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	size = width * height;
	ptr = malloc(size * sizeof(int));

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ptr[i][j] = var;
			j++;
		}
		i++;
	}

	if (ptr != NULL)
		return (ptr);
	free(ptr);
	return (NULL);
}
