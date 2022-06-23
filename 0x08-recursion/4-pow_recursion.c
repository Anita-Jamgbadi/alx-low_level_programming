#include "main.h"

/**
 * _pow_recursion - returns x exponential y
 * @x: base
 * @y: power
 * Return: result or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (x * 1);

	if (y > 0)
		return (x * _pow_recursion(x, (y - 1)));
}
