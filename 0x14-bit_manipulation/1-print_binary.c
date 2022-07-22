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
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
