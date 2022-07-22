#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits that would need to be flipped
 * @n: number
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k;
	int i;

	k = n ^ m;
	i = 0;
	while (k >= 1)
	{
		if ((k & 1) == 1)
			i++;
		k >>= 1;
	}
	return (i);
}
