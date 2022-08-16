#include "main.h"

/**
 * print_line - prints a line of length n on the screen
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

