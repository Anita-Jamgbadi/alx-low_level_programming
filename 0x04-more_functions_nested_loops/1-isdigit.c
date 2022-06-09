#include "main.h"

/**
 * _isdigit - checks if c is a digit btwn 0 and 9
 * @c: variable
 * Return: 1 is true, 0 otherwise
 */

int _isdigit(int c)
{
	int value;

	if (c >= '0' && c <= '9')
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
