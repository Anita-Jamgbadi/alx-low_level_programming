#include "main.h"

/**
 * factorial - gets the factorial of @n
 * @n: number whose factorial is to be calculated
 * Return: factorial of n or -1 for error
 */

int factorial(int n)
{
	int res, i;

	if (n < 0)
		res = -1;
	if (n <= 1)
		res = 1;
	if (n > 1)
	{
		res = n * factorial(n - 1);
	}
}

