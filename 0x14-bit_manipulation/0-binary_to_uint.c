#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * power - exponentiation
 * @n: int
 * @p: power
 * Return: result
 */

unsigned int power(unsigned int n, unsigned int p)
{
	if (p != 0)
		return (n * power(n, p - 1));
	else
		return (1);
}


/**
 * binToInt - binary to dec
 * @b: ptr to bnary string
 * Return: converted figure or 0
 */

unsigned int binToInt(const char *b)
{
	unsigned int len, count, result, powa, conv, zero;

	len = strlen(b);
	count = result = zero = 0;
	powa = len - 1;
	while (count < len)
	{
		conv = b[count] - '0';
		if ((conv < zero) || (conv > 1))
			return (0);

		result += conv * power(2, powa);
		count++;
		powa--;
	}
	return (result);
}

/**
 * binary_to_uint - binary to integer
 * @b: binary string
 * Return: the new convert or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);
	result = binToInt(b);
	return (result);
}
