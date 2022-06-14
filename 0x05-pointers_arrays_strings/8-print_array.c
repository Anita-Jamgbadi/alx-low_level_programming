#include <stdio.h>
#include "main.h"

/**
 * print_array - print from array
 * @a: points to array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (a[i] != '\0' && i <= n)
	{
		if (i == n)
		{
			printf("%d", a[i]);
			break;
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
}