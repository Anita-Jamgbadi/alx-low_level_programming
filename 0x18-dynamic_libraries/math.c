#include <stdio.h>

/**
 * add - adds two ints
 * Return: result
 */

int add(int n, int i)
{
	return (n + i);
}

/**
 * sub - subtract
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide
 * Return: a / b
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - absolute
 * Return: absolute value of a
 */
int mod(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
