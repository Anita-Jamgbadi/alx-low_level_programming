#include "main.h"

/**
 * print_line - prints a line of length n on the screen
 * @n: length of line
 */


void print_line(int n)
{
	int i = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}

