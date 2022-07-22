#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets bit at given index to 1
 * @n: points to int for operation
 * @index: index to be changed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	k = 1;
	if (sizeof(n) * 8 < index)
		return (-1);
	k = k << index;
	*n |= k;
	return (1);
}
