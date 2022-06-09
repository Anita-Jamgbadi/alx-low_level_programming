#include "main.h"

/**
 * print_last_digit - prints last digit of input
 * @a: number to be sructinized
 * Return: last digit of a
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		a = a / -1;
		a = a % 10;
	}
	else if (a == 0)
	{
		a = a;
	}
	else
	{
		a = a % 10;
	}

	_putchar(a + '0');

	return (a);
}
