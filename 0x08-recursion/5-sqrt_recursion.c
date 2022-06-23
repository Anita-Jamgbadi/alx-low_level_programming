#include "main.h"

/**
 * _sqrt_recursion - get the square root of a number n
 * @n: variable
 * Return: Square root or -1
 */

int tester(int a, int b);

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (tester(1, n));
}

/**
 * tester - tests for square root
 * @a: var
 * @b: var
 * Return: int
 */

int tester(int a, int b)
{
	if (a * a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	else
		return (tester(a + 1, b));
}
