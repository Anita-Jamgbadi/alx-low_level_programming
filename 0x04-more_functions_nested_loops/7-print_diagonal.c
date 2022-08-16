#include "main.h"

/**
 * print_diagonal - prints a diagnal line on the terminal
 *
 * @n: size of diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 2; j++)
		{
			if (j == i)
				_putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
