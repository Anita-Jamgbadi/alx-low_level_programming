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

	if (n == 0)
	{
		a[0] = a[0];
	}
	else
	{
		while (i > 0)
		{
			a[j] = a[i];
			j++;
			i--;
		}
	}
}
