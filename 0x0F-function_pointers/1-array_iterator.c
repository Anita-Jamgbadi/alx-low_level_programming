#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a given function as a parameter
 * on each element of an array
 * @array: array of integers
 * @size: szie of the array
 * @action: point to a function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size - 1)
		{
			action(array[i]);
			i++;
		}
	}
}

