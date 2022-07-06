#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: points to the actual search function
 * Return: index of the first element for which cmp does not return 0,
 * if no match, return (1), if size <= 0, return (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, cmpValue;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			cmpValue = cmp(array[i]);
			if (cmpValue != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
