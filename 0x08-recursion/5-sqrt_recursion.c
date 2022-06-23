#include "main.h"

/**
 * _sqrt_recursion - get the square root of a number n
 * @n: variable
 * Return: Square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		res = 0;
	return (tester(1, n));
}

int tester(int n, int b)
{
	if (a * a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	else
		return (tester(a + 1, b));
}
