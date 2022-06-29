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
	int var;

	var = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(height * sizeof(int *));

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		ptr[i] = (int *)malloc(sizeof(int *) * height);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ptr[i][j] = var;
			j++;
		}
		i++;
	}

	return (ptr);
}
