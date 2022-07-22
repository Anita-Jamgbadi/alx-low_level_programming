#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_binary - print binary representation of an int
 * @n: int to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	for (i = 1 << 31; i > 0; i = i / 2)
	{
		(n & i)? printf("1") : printf("0");
	}
}
