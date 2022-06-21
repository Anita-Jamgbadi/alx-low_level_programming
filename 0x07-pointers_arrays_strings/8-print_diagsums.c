#include "main.h"

/**
 * print_diagsums - print diagonal sums from arrays
 * @a: array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i, j;

	i = j = 0;
	while (*a[i] != '\0')
	{
		while (j < size)
		{

