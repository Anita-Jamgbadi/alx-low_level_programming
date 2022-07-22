#include "main.h"
#include <stdio.h>
#include <string.h>
	
/**
 * get_bit - gets the bit at any position of a given int converted
 * to binary
 *
 * @n: given int
 * @index: index to check
 * Return: required bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}

