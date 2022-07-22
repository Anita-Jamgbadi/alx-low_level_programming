#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets a bit to 0 (i.e clears bit)
 * @n: points to int
 * @index: index to be tampered with
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*n & k)
		*n ^= k;

	return (1);
}
