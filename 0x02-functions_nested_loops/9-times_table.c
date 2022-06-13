#include "main.h"

/**
 * times_table - prints the 9 times table from 0
 */

void times_table(void)
{
	int row;
	int col;
	int res;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			res = row * col;
			if (col == 0)
			{
				_putchar(res + '0');
			}

			if (col > 0 && res <= 9)
			{
				_putchar(res + '0');
				_putchar(' ');
			}
			if (res > 9)
			{
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
				_putchar(' ');
				_putchar(' ');
			}

			if (col < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}


