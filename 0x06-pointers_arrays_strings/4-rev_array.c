#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = n;
	j = 0;

	while (i > 0)
	{
		a[j] = a[i];
		j++;
		i++;
	}
}
