#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: cahr to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	int value;

	if (c <= 'Z' && c >= 'A')
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
