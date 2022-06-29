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
	int **ptrr;
	int *ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	i = j = 0;
	ptr = malloc((width * height) * sizeof(int));

	if (!ptr)
		return (NULL);

	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ptr[j] = '0';
			j++;
		}
		i++;
	}

	ptrr = &ptr;
	return (ptrr);
}
