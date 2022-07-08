#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds a + b
 * @a: int
 * @b: int
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @b: int
 * @a: int
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication
 * @a: int
 * @b: int
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: int
 * @b: int
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus
 * @a: int
 * @b: int
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
